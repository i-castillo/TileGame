#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <SFML/System.hpp>
#include <string>

class Entity{

  private:
    std::string name;
    sf::Vector2f position;
    sf::Vector2f speed;

};

#endif