//================================================
/**
 *  @file  BaseTypes_Handler.h
 *
 *  $Id$
 *
 *  @author Jules White <jules@dre.vanderbilt.edu>
 */
//================================================

#ifndef BaseTypes_HANDLER_H
#define BaseTypes_HANDLER_H

#include /**/ "ace/pre.h"

#include "ciao/DeploymentC.h"
#include "Basic_Deployment_Data.hpp"


#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


// @@ Jules, what do we achieve by this class Gains seem low to me..
namespace CIAO{

  namespace Config_Handlers{


   /*
    * @class BaseTypes_Handler
    *
    * @brief Handler class for <ComponentInterfaceDescription> types.
    *
    * This class defines handler methods to map values from
    * XSC Any objects, parsed from the descriptor files, to the
    * corresponding CORBA IDL Any type.
    *
    */

    class BaseTypes_Handler{

      public:

      BaseTypes_Handler();
      virtual ~BaseTypes_Handler();

      ///This method takes a <XMLSchema::string>
      ///and returns a duplicate char* that is
      ///created with CORBA::string_dup.
      static char* get_string (XMLSchema::string<char>& desc);

    };

  }

}
#include /**/ "ace/post.h"
#endif /* BaseTypes_HANDLER_H */
