#include "TimeStats.hpp"
#include <string>


void TimeStats::updateTimeStats(sf::Time & elapsedTime)
{

  updateTime += elapsedTime;
  numFrames += 1;

  if (updateTime >= sf::seconds(1.0f))
  {
    text.setString(
        "Frames / Second = " + std::to_string(numFrames) + "\n" +
        "Time / Update = " + std::to_string(updateTime.asMicroseconds() / numFrames) + "us");

    updateTime -= sf::seconds(1.0f);
    numFrames = 0;
  }
}
