#include "Window.hpp"

void Window::create(u32 width, u32 height, u32 bitsPerPixel, const sf::String &title, u32 style)
{
	m_width  = width;
	m_height = height;
	m_bpp	 = bitsPerPixel;
	m_style  = style;
	m_title  = title;
	m_window.create(sf::VideoMode(m_width, m_height, m_bpp), m_title, m_style);
}

bool Window::windowIsOpen()
{
	return m_window.isOpen();
}

void Window::draw(sf::Drawable &shape)
{
	m_window.draw(shape);
}

void Window::clear()
{
	m_window.clear();
}

void Window::show()
{
	m_window.display();
}

void Window::processEvent()
{
	sf::Event event;

	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed) m_window.close();
			
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) m_window.close();
	}
}
