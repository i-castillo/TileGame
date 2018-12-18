#include "Game.hpp"
#include "GameWindow.hpp"
#include "Player.hpp"

const sf::Time Game::timePerFrame(sf::seconds(1.f/60.f));

Game::Game()
{
  window.initialize();
  player.initialize();

}

void Game::run()
{
  sf::Clock clock;
  sf::Time timeSinceLastUpdate(sf::Time::Zero);
  while (window.isOpen())
  {
    sf::Time elapsedTime = clock.restart();
    timeSinceLastUpdate += elapsedTime;
    while (timeSinceLastUpdate > timePerFrame)
    {
      timeSinceLastUpdate -= timePerFrame;

      processEvents();
      update(timePerFrame);
    }

    ts.updateTimeStats(elapsedTime);
    render();
  }
}

void Game::update(const sf::Time elapsedTime){

}

void Game::processEvents()
{
  sf::Event event;
  while (window.pollEvent(event))
  {
    switch (event.type)
    {
      case sf::Event::KeyPressed:
        handlePlayerInput(event.key.code, true);
        break;

      case sf::Event::KeyReleased:
        handlePlayerInput(event.key.code, false);
        break;

      case sf::Event::Closed:
        window.close();
        break;
    }
  }
}

void Game::render()
{
  window.clear();	
  window.display();
}

void Game::handlePlayerInput(sf::Keyboard::Key key, bool isPressed)
{	

}

