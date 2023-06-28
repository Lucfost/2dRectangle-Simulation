#pragma once

#include "Draw.hpp"

class Rectangle : public Draw
{
public:
	Rectangle();
	void updatePos();
	void setPos(float a0, float a1); // debug
	void setRGBA(Uint8 red, Uint8 green, Uint8 blue, Uint8 alpha = 255U);
	void setfRGBA(Uint8 red, Uint8 green, Uint8 blue, Uint8 alpha = 255U);
	void setColor(const sf::Color &color);
	void setfColor(const sf::Color &fcolor);
	void setThickness(const float v0);
	void setSize(float sizeX, float sizeY);
	void setVelocityX(float v1);
	void setVelocityY(float v2);
	virtual void draw(Window &window) override;
	float getVelocityX();
	float getVelocityY();
	
protected:
	const float			    PI = 3.14159265358979f;
	sf::Vector2f			m_pos;
	sf::RectangleShape		m_rectangle;
	sf::Color 				m_color;
	float					m_velX;
	float					m_velY;
	float					m_sizeX;
	float					m_sizeY;
	Uint8					m_r;
	Uint8					m_g;
	Uint8					m_b;
	Uint8					m_a;
};