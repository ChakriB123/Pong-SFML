#include <iostream>
#include <SFML/Graphics.hpp>

#include "Header/Core/GameWindowManager.h"
#include "Header/Event/EventManager.h"

int main() {
    // Create our window manager instance
    Events::EventManager eventManager;
    Core::GameWindowManager gameWindowManager;

    // Initialize the window
    gameWindowManager.initialize();

    while (gameWindowManager.isGameRunning()) {
        eventManager.pollEvents(gameWindowManager.getGameWindow());
        gameWindowManager.render();
    }

    return 0;
}