#pragma once
#include "Paddle/Paddle.h"
#include "Ball/Ball.h"
#include "../Event/EventManager.h"
#include "../Gameplay/Boundary/Boundary.h"
#include "../Utility/TimeService.h"
#include "../UI/UIService.h"

using namespace Events;
using namespace Utility;
using namespace UI;

namespace Gameplay
{
	class GameplayManager
	{
	private:
		void initialize();
		Ball* ball;
		Paddle* player1;
		Paddle* player2;
		Boundary* boundary;
		TimeService* time_service;
		UIService* ui_service;

		float player1_position_x = 40.0f;
		float player1_position_y = 300.0f;

		float player2_postion_x = 1210.0f;
		float player2_postion_y = 300.0f;
		EventManager* event_manager;

	public:
		GameplayManager();
		GameplayManager(EventManager* manager);
		void update();
		void render(RenderWindow* game_window);
	};
}
