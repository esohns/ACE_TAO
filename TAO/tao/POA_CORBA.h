/* -*- C++ -*- */
// $Id$
// ============================================================================
//
// = LIBRARY
//    TAO
//
// = FILENAME
//    POA_CORBA.h
//
//    This file is created by merging the PolicyS.h and CurrentS.h files which
//    have been removed.
//
// = AUTHOR
//
// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO ORB and the TAO IDL Compiler have been developed by Washington
// University Computer Science's Distributed Object Computing Group.
//
// Information on TAO is available at
//                 http://www.cs.wustl.edu/~schmidt/TAO.html
//
//
// Modified by Aniruddha Gokhale.
//
// ============================================================================

#if !defined (_TAO_IDL_POA_CORBA_H_)
#define _TAO_IDL_POA_CORBA_H_

#include "PolicyC.h"
#include "CurrentC.h"

class TAO_Export  POA_CORBA
{
public:
  class Policy;
  typedef Policy *Policy_ptr;
  class TAO_Export  Policy :  public virtual TAO_ServantBase
  {
  protected:
    Policy (void);
  public:
    virtual ~Policy (void);
    virtual CORBA::Boolean _is_a (
        const char* logical_type_id,
        CORBA::Environment &_tao_environment);
    virtual void* _downcast (
        const char* logical_type_id
      );
    virtual CORBA::PolicyType policy_type (
        CORBA::Environment &_tao_environment
       ) = 0;
    static void _get_policy_type_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &_tao_env
      );

    virtual CORBA::Policy_ptr copy (
        CORBA::Environment &_tao_environment
       ) = 0;
    static void copy_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &_tao_env
      );

    virtual void destroy (
        CORBA::Environment &_tao_environment
       ) = 0;
    static void destroy_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &_tao_env
      );

    static void _is_a_skel (CORBA::ServerRequest &req, void *obj, void *context, CORBA::Environment &_tao_enviroment);

    virtual void _dispatch (CORBA::ServerRequest &_tao_req, void *_tao_context, CORBA::Environment &_tao_env);

    ACE_CORBA_1(Policy) *_this (CORBA::Environment &_tao_environment);
    virtual const char* _interface_repository_id (void) const;
  };


#if !defined (_CORBA_POLICY___COLLOCATED_SH_)
#define _CORBA_POLICY___COLLOCATED_SH_

  class TAO_Export  _tao_collocated_Policy     : public virtual CORBA_Policy
  {
  public:
    _tao_collocated_Policy (
        Policy_ptr  servant,
        STUB_Object *stub
      );
    Policy_ptr _get_servant (void) const;
    virtual CORBA::Boolean _is_a (
        const char *logical_type_id,
        CORBA::Environment &_tao_environment
      );
    virtual CORBA::PolicyType policy_type (
        CORBA::Environment &_tao_environment
       );
    virtual CORBA::Policy_ptr copy (
        CORBA::Environment &_tao_environment
       );
    virtual void destroy (
        CORBA::Environment &_tao_environment
       );

  private:
    Policy_ptr servant_;
  };


#endif /* end #if !defined */



#if defined(_MSC_VER)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

  class Current;
  typedef Current *Current_ptr;
  class  Current :  public virtual TAO_ServantBase
  {
  protected:
    Current (void);
  public:
    virtual ~Current (void);
    virtual CORBA::Boolean _is_a (
        const char* logical_type_id,
        CORBA::Environment &_tao_environment);
    virtual void* _downcast (
        const char* logical_type_id
      );
    static void _is_a_skel (CORBA::ServerRequest &req, void *obj, void *context, CORBA::Environment &_tao_enviroment);

    virtual void _dispatch (CORBA::ServerRequest &_tao_req, void *_tao_context, CORBA::Environment &_tao_env);

    ACE_CORBA_1(Current) *_this (CORBA::Environment &_tao_environment);
    virtual const char* _interface_repository_id (void) const;
  };


#if !defined (_CORBA_CURRENT___COLLOCATED_SH_)
#define _CORBA_CURRENT___COLLOCATED_SH_

  class  _tao_collocated_Current     : public virtual CORBA_Current
  {
  public:
    _tao_collocated_Current (
        Current_ptr  servant,
        STUB_Object *stub
      );
    Current_ptr _get_servant (void) const;
    virtual CORBA::Boolean _is_a (
        const char *logical_type_id,
        CORBA::Environment &_tao_environment
      );

  private:
    Current_ptr servant_;
  };


#endif /* end #if !defined */


};


#if defined(_MSC_VER)
#pragma warning(default:4250)
#endif /* _MSC_VER */

#endif /* if !defined */
