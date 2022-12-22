#pragma once

#include "level.h"
#include "command.cpp"

namespace Ouroboros
{
	class Game
	{
	public:
		Game() {}
		~Game() {}

		void Run();
	private:
		void ProcessInput();
		void Update();
		void Render();

		Level level;
		Command currentMove;
	};
}