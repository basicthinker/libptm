
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableInterceptor_CurrentHelper__
#define __org_omg_PortableInterceptor_CurrentHelper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class Object;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace PortableInterceptor
      {
          class Current;
          class CurrentHelper;
      }
    }
  }
}

class org::omg::PortableInterceptor::CurrentHelper : public ::java::lang::Object
{

public:
  CurrentHelper();
  static ::org::omg::CORBA::TypeCode * type();
  static void insert(::org::omg::CORBA::Any *, ::org::omg::PortableInterceptor::Current *);
  static ::org::omg::PortableInterceptor::Current * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static ::org::omg::PortableInterceptor::Current * narrow(::org::omg::CORBA::Object *);
  static ::org::omg::PortableInterceptor::Current * unchecked_narrow(::org::omg::CORBA::Object *);
  static ::org::omg::PortableInterceptor::Current * read(::org::omg::CORBA::portable::InputStream *);
  static void write(::org::omg::CORBA::portable::OutputStream *, ::org::omg::PortableInterceptor::Current *);
  static ::java::lang::Class class$;
};

#endif // __org_omg_PortableInterceptor_CurrentHelper__
