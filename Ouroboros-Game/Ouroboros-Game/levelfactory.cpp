#include "level.h"

namespace Ouroboros
{
	static Level Generate()
	{
		return { 
			GameState::running, 
			{Segment::empty, Segment::empty,     Segment::empty,
			 Segment::empty, Segment::snakehead, Segment::empty}, 
			2, 
			{3,2} 
		};
	}
	
	static Level MoveRight(Level level)
	{
		// ToDo: Move Snake and update GameState
		return level;
	}

	static Level MoveLeft(Level level)
	{
		// ToDo: Move Snake and update GameState
		return level;
	}

	static Level MoveUp(Level level)
	{
		// ToDo: Move Snake and update GameState
		return level;
	}

	static Level MoveDown(Level level)
	{
		// ToDo: Move Snake and update GameState
		return level;
	}
}