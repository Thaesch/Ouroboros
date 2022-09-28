# Ouroboros

## Structure

### Snake

The snake is stored inside the level.

### Level

The level is made of _segments_ and a _gamestate_.

### GameState

A gamestate is one of:
* running
* crashed
* ouroborosed

### Segment

A segment is one of:
* Snake Head
* Snake Body
* Snake Tail
* Empty
* Wall
* Crash
* Ouroboros

### Command

A command contains two functions:
* DoMove
(* UndoMove)
both functions receive a level as input and output a new level.

Level DoMove(Level level)

Every move is valid, so if the player decides to create his own death, so be it.

### Game

A game contains the functionality game loop.

## Game Loop

... -> display current Level -> receive player input -> convert input to command -> perform command -> ...
                             -> player has won / has lost -> END
### Input Manager

reads input from the player and converts it into a command.
