
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_colorchooser_DefaultSwatchChooserPanel$MouseHandler__
#define __javax_swing_colorchooser_DefaultSwatchChooserPanel$MouseHandler__

#pragma interface

#include <java/awt/event/MouseAdapter.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class MouseEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace colorchooser
      {
          class DefaultSwatchChooserPanel;
          class DefaultSwatchChooserPanel$MouseHandler;
      }
    }
  }
}

class javax::swing::colorchooser::DefaultSwatchChooserPanel$MouseHandler : public ::java::awt::event::MouseAdapter
{

public: // actually package-private
  DefaultSwatchChooserPanel$MouseHandler(::javax::swing::colorchooser::DefaultSwatchChooserPanel *);
public:
  virtual void mousePressed(::java::awt::event::MouseEvent *);
public: // actually package-private
  ::javax::swing::colorchooser::DefaultSwatchChooserPanel * __attribute__((aligned(__alignof__( ::java::awt::event::MouseAdapter)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_colorchooser_DefaultSwatchChooserPanel$MouseHandler__