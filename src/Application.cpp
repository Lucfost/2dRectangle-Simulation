#include "Application.hpp"


Application::Application()
{
	
}

void Application::build()
{
	m_window.create(1940u, 1090u, 24u, "Simulation|244|Destructor 'Esc'", 1u);
}

void Application::start(i32 fps)
{
	float cerfps = 1.0f / fps;
	m_frame = sf::seconds(cerfps);
	m_elapsedTime = m_time.restart();
	while (m_window.windowIsOpen())
	{
		m_window.processEvent();
		m_elapsedTime = m_time.getElapsedTime();
		if (m_elapsedTime >= m_frame)
		{
			renderWindow();
			m_elapsedTime = sf::seconds(0.0f);
			m_time.restart();
		}
		else
		{
			sf::sleep(m_elapsedTime - m_elapsedTime - m_frame);
			LOG(fps);
		}
	}
}

void Application::renderWindow()
{
	renderFrame();
	updateFrame();
}

void Application::renderFrame()
{
	m_window.clear();
	m_simula.draw(m_window);
	m_window.show();
}

void Application::updateFrame()
{
	m_simula.movement();
}


