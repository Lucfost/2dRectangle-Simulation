#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include <ostream>
#include "function.h"

class Window
{
public:
    void create(u32 width, 
                u32 height,
                u32 bitsPerPixel = 32u,
                const sf::String &title = "2dRectangle-Simulation",
                u32 style = 7u);
    bool windowIsOpen();
    void draw(sf::Drawable &shape);
    void clear();
    void show();
    void processEvent();
  
private:
    sf::RenderWindow    m_window;
    sf::String          m_title;
    u32                 m_width;
    u32                 m_height;
    u32                 m_bpp;
    u32                 m_style;
};
