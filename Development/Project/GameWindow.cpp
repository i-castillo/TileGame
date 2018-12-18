#include "GameWindow.hpp"
#include <SFML/Window.hpp>
GameWindow::GameWindow() : RenderWindow(sf::VideoMode(800, 600), "Game", sf::Style::Titlebar | sf::Style::Close)
{

}
void GameWindow::initialize(){
  open = true;

}

bool GameWindow::isOpen(){
  return open;
}
