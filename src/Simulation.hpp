#pragma once

#include "Rectangle.hpp"

class Simula : public Rectangle
{
public:
	Simula();
	void generateRectangle();
	void movement();
	void draw(Window &window) override;

private:
	Rectangle		m_rectangle;
	Rectangle		m1_rectangle;
	Rectangle		m2_rectangle;
};