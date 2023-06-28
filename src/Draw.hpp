#pragma once

#include "Window.hpp"

class Draw : public Window 
{
public:
	Draw();
	virtual void draw(Window &window) = 0;
private:
	bool m_draw;
};