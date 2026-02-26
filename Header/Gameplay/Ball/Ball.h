#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Paddle/Paddle.h"
#include "../../Header/Utility/TimeService.h"
#include "../../Header/Sound/SoundManager.h"

using namespace sf;
using namespace Utility;
using namespace std;
using namespace Sound;

namespace Gameplay
{
    enum class BallState
    {
        Idle,
        Moving
    };
    class Ball
    {
    private:
        Texture pong_ball_texture;
        Sprite pong_ball_sprite;
        string texture_path = "Assets/Textures/Ball.png";
        float ball_speed = 2.5f;
        Vector2f velocity = Vector2f(ball_speed, ball_speed);
        float speed_multiplier = 100;
        float delay_duration = 2.0f;
        float elapsed_delay_time = 0.0f;

        BallState current_state;

        const float scale_x = 0.06f;
        const float scale_y = 0.06f;

        const float position_x = 615.0f;
        const float position_y = 325.0f;

        const float top_boundary = 20.0f;
        const float bottom_boundary = 700.0f;

        const float left_boundary = 0.0f;
        const float right_boundary = 1280.0f;

        const float center_position_x = 615.0f;
        const float center_position_y = 325.0f;

        void loadTexture();
        void initializeVariables();
        void updateDelayTime(float deltaTime);
        void move(TimeService* time_service);

        bool had_left_collison = false;
        bool had_right_collison = false;

    public:

        Ball();

        bool isLeftCollisionOccurred();
        void updateLeftCollisionState(bool value);

        bool isRightCollisionOccurred();
        void updateRightCollisionState(bool value);

        void update(Paddle* player1, Paddle* player2,TimeService* time_service);
        void render(RenderWindow* game_window);
        void handlePaddleCollision(Paddle* player1, Paddle* player2);
        void handleBoundaryCollision();
        void handleOutofBoundCollision();
        void reset();
        void onCollision(Paddle* player1, Paddle* player2);
    };
}