/* -*- C++ -*-  */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.dre.vanderbilt.edu/~schmidt/TAO.html

#include "Messenger_i.h"
#include "ace/OS_NS_unistd.h"
#include "ace/OS_NS_sys_time.h"
#include <iostream>
// Implementation skeleton constructor
Messenger_i::Messenger_i (unsigned int seconds_to_wait,
                          CORBA::Boolean throw_exception)
  : seconds_to_wait_(seconds_to_wait)
  , throw_exception_(throw_exception)
{
}

// Implementation skeleton destructor
Messenger_i::~Messenger_i ()
{
}

CORBA::Boolean Messenger_i::send_message (
  const char * user_name,
  const char * subject,
  char *& message,
  CORBA::Long_out time_sent
  )
{
  if (throw_exception_)
  {
    std::cout << "Throwing MessengerUnableToSendMessage exception." << std::endl;
    throw MessengerUnableToSendMessage();
  }

  std::cout << "Write a letter to " << user_name << " as follows:" << std::endl;
  std::cout << "Subject: " << subject << std::endl;
  std::cout << "Dear " << user_name << ',' << std::endl;
  std::cout << message << std::endl;

  if (seconds_to_wait_ > 0)
  {
    std::cout << "Waiting for " << seconds_to_wait_ << " seconds..." << std::flush;
    ACE_OS::sleep(seconds_to_wait_);
    std::cout << " Done waiting" << std::endl;
  }

  // Record the time the message was sent
  time_sent = static_cast<CORBA::Long> (ACE_OS::gettimeofday().sec());

  // We will assume the message has been sent, so return true
  return true;
}


