#ifndef GAME_HPP
#define GAME_HPP

#include "Map.hpp"
#include "GameWindow.hpp"
#include "Player.hpp"
#include "TimeStats.hpp"

class Game {

  private:
    static const sf::Time timePerFrame;
    Map map; //Our map represents our world
    GameWindow window;
    Player player;
    TimeStats ts;

    void update(const sf::Time);
    void processEvents();
    void updateTimeStats(sf::Time &);

  public:
    Game();
    void run();
    void render();
    void handlePlayerInput(sf::Keyboard::Key, bool);
};

#endif