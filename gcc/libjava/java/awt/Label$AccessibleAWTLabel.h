
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Label$AccessibleAWTLabel__
#define __java_awt_Label$AccessibleAWTLabel__

#pragma interface

#include <java/awt/Component$AccessibleAWTComponent.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Label;
        class Label$AccessibleAWTLabel;
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

class java::awt::Label$AccessibleAWTLabel : public ::java::awt::Component$AccessibleAWTComponent
{

public:
  Label$AccessibleAWTLabel(::java::awt::Label *);
  virtual ::java::lang::String * getAccessibleName();
  virtual ::javax::accessibility::AccessibleRole * getAccessibleRole();
private:
  static const jlong serialVersionUID = -3568967560160480438LL;
public: // actually package-private
  ::java::awt::Label * __attribute__((aligned(__alignof__( ::java::awt::Component$AccessibleAWTComponent)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_Label$AccessibleAWTLabel__
