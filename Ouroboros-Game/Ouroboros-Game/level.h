#include "gamestate.h"
#include "segment.h"
#include <vector>
#include <pair>

namespace Ouroboros
{
	struct Level {
		GameState currentState;
		std::vector<Segment> segments;
		int snakelength;
		std::pair<int, int> dimesions;
	};
}