
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_beans_encoder_Context__
#define __gnu_java_beans_encoder_Context__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace beans
      {
        namespace encoder
        {
            class Context;
        }
      }
    }
  }
}

class gnu::java::beans::encoder::Context : public ::java::lang::Object
{

public: // actually package-private
  Context(::java::lang::String *, jint);
public:
  virtual jint hashCode();
  virtual jboolean equals(::java::lang::Object *);
  virtual ::java::lang::String * toString();
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) state;
  jint call;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_beans_encoder_Context__