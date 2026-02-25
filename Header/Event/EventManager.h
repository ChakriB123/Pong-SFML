#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;

 namespace Events {
     class EventManager {
     public:
         void pollEvents(RenderWindow* game_window); // Process all events
         bool isKeyPressed(sf::Keyboard::Key key);   // Check specific key
         bool isLeftMouseButtonClicked();
     };

}