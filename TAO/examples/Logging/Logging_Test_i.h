/* -*- C++ -*- */

//=============================================================================
/**
 *  @file    Logging_Test_i.h
 *
 *  This class implements a simple logger CORBA client for the Logger
 *  example using stubs generated by the TAO ORB IDL compiler
 *
 *  @author   Sergio Flores-Gaitan <sergio@cs.wustl.edu>   Matt Braun <mjb2@cec.wustl.edu>
 */
//=============================================================================


#ifndef _LOG_CLIENT_H
#define _LOG_CLIENT_H

#include "ace/Get_Opt.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "orbsvcs/CosNamingC.h"
#include "LoggerC.h"
#include "orbsvcs/Naming/Naming_Client.h"

/**
 * @class Logger_Client
 *
 * @brief Defines a class that encapsulates behaviour of the Logger
 * client example.  Provides a better understanding of the logic
 * in an object oriented way.
 *
 * This class declares an interface to run the example client for
 * Logger CORBA server.  All the complexity for initializing the
 * server is hidden in the class.  Just the <run> interface is
 * needed.
 */
class Logger_Client
{
public:
  /// Constructor.
  Logger_Client ();

  /// Destructor.
  ~Logger_Client ();

  /// Initialize the client communication endpoint with server.
  int init (int argc, ACE_TCHAR **argv);

  /// Execute client example code.
  int run ();

private:
  /// Parses the arguments passed on the command line.
  int parse_args ();

  /// Prepares the <Log_Record> for logging.
  void init_record (Logger::Log_Record &newrec,
                    Logger::Log_Priority lp,
                    const char *msg);

  /// Initialises the name server and resolves the logger_factory
  int init_naming_service ();

  /// Instantiates the 2 logger member variables
  int init_loggers ();

  /// Shows contents of the record (for debugging purposes).
  void show_record (Logger::Log_Record &newrec);

  /// Keep a pointer to the ORB for easy access
  CORBA::ORB_var orb_;

  /// An instance of the name client used for resolving the factory
  /// objects.
  TAO_Naming_Client my_name_client_;

  /// # of arguments on the command line.
  int argc_;

  /// arguments from command line.
  ACE_TCHAR **argv_;

  /// A pointer to the Logger_Factory; used in init_loggers
  Logger_Factory_var factory_;

  /// Logger obj ref.
  Logger_var logger_1_;

  /// Logger obj ref.
  Logger_var logger_2_;
};

#endif /* _LOG_CLIENT_H */
