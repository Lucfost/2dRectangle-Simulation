#pragma once
#include "Window.hpp"
#include "Simulation.hpp"

class Application
{
public:
    Application();
    void build();
    void start(i32 fps);
    void renderWindow();
    void renderFrame();
    void updateFrame();

private:
    Window      m_window;
    Simula      m_simula;
    sf::Clock   m_time;
    sf::Time    m_frame;
    sf::Time    m_elapsedTime;
};
