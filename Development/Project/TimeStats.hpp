#ifndef TIMESTATS_HPP
#define TIMESTATS_HPP

#include "SFML/Graphics.hpp"
class TimeStats {

  private:
    sf::Time updateTime;
    unsigned int numFrames;
    sf::Text text;

  public:
    void updateTimeStats(sf::Time &);
    void updateText(const std::string &);

};

#endif