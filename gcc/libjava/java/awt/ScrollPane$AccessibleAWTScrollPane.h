
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_ScrollPane$AccessibleAWTScrollPane__
#define __java_awt_ScrollPane$AccessibleAWTScrollPane__

#pragma interface

#include <java/awt/Container$AccessibleAWTContainer.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class ScrollPane;
        class ScrollPane$AccessibleAWTScrollPane;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleRole;
    }
  }
}

class java::awt::ScrollPane$AccessibleAWTScrollPane : public ::java::awt::Container$AccessibleAWTContainer
{

public: // actually protected
  ScrollPane$AccessibleAWTScrollPane(::java::awt::ScrollPane *);
public:
  virtual ::javax::accessibility::AccessibleRole * getAccessibleRole();
private:
  static const jlong serialVersionUID = 6100703663886637LL;
public: // actually package-private
  ::java::awt::ScrollPane * __attribute__((aligned(__alignof__( ::java::awt::Container$AccessibleAWTContainer)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_ScrollPane$AccessibleAWTScrollPane__