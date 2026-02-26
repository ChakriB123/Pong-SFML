#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Utility/TimeService.h"
using namespace sf;
using namespace Utility;

namespace Gameplay {
    class Paddle
    {
    private:
        RectangleShape paddle_sprite;
        const float paddle_width = 20.0f;
        const float paddle_height = 140.0f;
        const float paddleSpeed = 3.0f;
        const float topBoundary = 20.0f;
        const float bottomBoundary = 700.0f;
        int speedMultiplier = 100;

        void movePaddle(bool move_up_key_pressed, bool move_down_key_pressed, TimeService* time_service);
    public:
        Paddle(float position_x, float position_y);
        RectangleShape getPaddleSprite();
        void update();
        void render(RenderWindow* game_window);
        void update(bool move_up_key_pressed, bool move_down_key_pressed, TimeService* time_service);
    };
}