#pragma once

#include "gamestate.h"
#include "segment.h"
#include <vector>

namespace Ouroboros
{
	struct Level {
		GameState currentState;
		std::vector<Segment> segments;
        std::vector<int> snake;
		int snakelength;
        int width;
        int height;
	};
}
