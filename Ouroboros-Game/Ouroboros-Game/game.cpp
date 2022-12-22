#include "game.h"
#include "levelfactory.cpp"

namespace Ouroboros 
{
	void Game::Run()
	{
		while (true)
		{
			ProcessInput();
			Update();
			Render();
		}
	}

	void Game::ProcessInput()
	{

	}

	void Game::Update() 
	{
		currentMove.Execute(level);
	}

	void Game::Render() 
	{
	
	}

}