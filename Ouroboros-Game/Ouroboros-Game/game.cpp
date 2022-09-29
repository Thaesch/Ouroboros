#include "game.h"
#include "levelfactory.cpp"

namespace Ouroboros 
{
	Game::Run()
	{
		while (true)
		{
			ProcessInput();
			Update();
			Render();
		}
	}

	Game::ProcessInput()
	{

	}

	Game::Update() 
	{
		currentMove.Execute(level);
	}

	Game::Render() 
	{
	
	}

}