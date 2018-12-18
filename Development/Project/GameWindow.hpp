#ifndef GAMEWINDOW_HPP
#define GAMEWINDOW_HPP

#include <SFML/Graphics.hpp>
#include "Entity.hpp"

class GameWindow : public sf::RenderWindow {

  private: 
    bool open;
  public:
    GameWindow();
    bool isOpen();
    void initialize();
  
};

#endif