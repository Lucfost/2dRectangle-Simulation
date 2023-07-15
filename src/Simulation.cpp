#include "Simulation.hpp"

Simula::Simula()
{
	generateRectangle();
}

void Simula::generateRectangle()
{
	m_rectangle.setSize(40.f, 40.f);
	m_rectangle.setVelocityX(8 * sin(180 / PI));
	m_rectangle.setVelocityY(8 * sin(90 / PI));
	m_rectangle.setRGBA(233, 116, 81, 255);
	m_rectangle.setfRGBA(134, 48, 197, 255);
	m_rectangle.setThickness(2.0f);


	m1_rectangle.setSize(40.0f, 40.f);
	m1_rectangle.setVelocityX(5.0f);
	m1_rectangle.setVelocityY(5.0f);
	m1_rectangle.setRGBA(224, 16, 16, 255);
	m1_rectangle.setfRGBA(3, 21, 153, 255);
	m1_rectangle.setThickness(2.0f);


	m2_rectangle.setSize(40.0f, 40.f);
	m2_rectangle.setRGBA(90, 8, 140, 255);
	m2_rectangle.setfRGBA(255, 255, 255, 255);
	m2_rectangle.setThickness(2.0f);
	m2_rectangle.setVelocityX(17.f * sin(90 / PI));
	m2_rectangle.setVelocityY(17.f * sin(30 / PI));
}	

void Simula::movement()
{
	m_rectangle.updatePos();
	m1_rectangle.updatePos();
	m2_rectangle.updatePos();
}

void Simula::draw(Window &window)
{
	m_rectangle.draw(window);
	m1_rectangle.draw(window);
	m2_rectangle.draw(window);
}
