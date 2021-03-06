
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_ProcessBuilder__
#define __java_lang_ProcessBuilder__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>


class java::lang::ProcessBuilder : public ::java::lang::Object
{

public:
  ProcessBuilder(::java::util::List *);
  ProcessBuilder(JArray< ::java::lang::String * > *);
  ::java::util::List * command();
  ::java::lang::ProcessBuilder * command(::java::util::List *);
  ::java::lang::ProcessBuilder * command(JArray< ::java::lang::String * > *);
  ::java::io::File * directory();
  ::java::lang::ProcessBuilder * directory(::java::io::File *);
  ::java::util::Map * environment();
  jboolean redirectErrorStream();
  ::java::lang::ProcessBuilder * redirectErrorStream(jboolean);
  ::java::lang::Process * start();
private:
  ::java::io::File * __attribute__((aligned(__alignof__( ::java::lang::Object)))) directory__;
  ::java::util::List * command__;
  ::java::util::Map * environment__;
  jboolean redirect;
public:
  static ::java::lang::Class class$;
};

#endif // __java_lang_ProcessBuilder__
