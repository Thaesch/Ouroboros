#include "level.h"
#include "levelfactory.h"

namespace Ouroboros
{
	static Level ApplyMove(std::vector<int> snake, Level oldLevel)
	{
		// update tail and check for game end
		oldLevel.segments[*(oldLevel.snake.end() - 1)] = Segment::empty;

		// Update snake head and check for game end
		// TODO
		return Level();
	}

	static Level Generate()
	{
		return { 
			GameState::running, 
			{Segment::empty, Segment::empty,     Segment::empty,
			 Segment::empty, Segment::snakehead, Segment::empty}, 
			{2},
			3,
            2
		};
	}
	
	static Level MoveRight(Level level)
	{
		// ToDo: Move Snake and update GameState
        std::vector<int> newSnake;
        
        if(level.snake[0] % level.width == level.width - 1)
        {
            newSnake.push_back(level.snake[0]);
        }
        else
        {
            newSnake.push_back(level.snake[0] + 1);
        }
        
        for(int i =  1; i < level.snake.size(); ++i)
        {
            newSnake.push_back(level.snake[i-1]);
        }
        
		return ApplyMove(newSnake, level);
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
