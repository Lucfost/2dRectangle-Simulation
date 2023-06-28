#include "Window.hpp"
#include "Rectangle.hpp"


Rectangle::Rectangle()
{

}

void Rectangle::setSize(float sizeX, float sizeY)
{
	m_sizeX = sizeX;
	m_sizeY = sizeY;
	m_rectangle.setSize(sf::Vector2f(m_sizeX, m_sizeY));
}

void Rectangle::draw(Window &window)
{
	m_rectangle.setPosition(m_pos.x, m_pos.y);
	window.draw(m_rectangle);
}

void Rectangle::setPos(float x, float y)
{
	m_pos.x = x;	
	m_pos.y = y;
	m_rectangle.setPosition(m_pos.x, m_pos.y);
}

void Rectangle::updatePos()
{
	if (m_pos.x < 0 || m_pos.x > 1881u)  m_velX *= -1;
	if (m_pos.y < 0 || m_pos.y > 1010u)  m_velY *= -1;
	m_pos.x += m_velX * sin(180 / PI);
	m_pos.y -= m_velY * sin(180 / PI);
}

void Rectangle::setRGBA(Uint8 red, Uint8 green, Uint8 blue, Uint8 alpha) 
{
	m_r = red;
	m_g = green;
	m_b = blue;
	m_a = alpha;
	m_rectangle.setFillColor(sf::Color(m_r, m_g, m_b, m_a));
}

void Rectangle::setfRGBA(Uint8 red, Uint8 green, Uint8 blue, Uint8 alpha)
{
	m_r = red;
	m_g = green;
	m_b = blue;
	m_a = alpha;
	m_rectangle.setOutlineColor(sf::Color(m_r, m_g, m_b, m_a));
}

void Rectangle::setColor(const sf::Color &color)
{
	m_rectangle.setFillColor(color);
}

void Rectangle::setfColor(const sf::Color &fcolor)
{
	m_rectangle.setOutlineColor(fcolor);
}

void Rectangle::setThickness(const float v0)
{
	m_rectangle.setOutlineThickness(v0);
}

void Rectangle::setVelocityX(float v1)
{
	m_velX = v1;
}

void Rectangle::setVelocityY(float v2)
{
	m_velY = v2;
}

float Rectangle::getVelocityX()
{
	return m_velX;
}

float Rectangle::getVelocityY()
{
	return m_velY;
}
