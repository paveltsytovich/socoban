#include "Graphics.h"
#include <FL\Fl.H>
#include <FL\Fl_Window.h>

Graphics::Graphics()
{

}


Graphics::~Graphics()
{
}
void Graphics::Show()
{
	Fl_Window* w = new Fl_Window(500, 500, "test");
	w->end();
	w->show();
	Fl::run();
}
