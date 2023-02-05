#include"Game.h"

int main()
{
	srand(time(NULL));

	Game game;
	game.initGame();

	while (game.getPlaying())
	{
		game.menuPrincipal();
	}

	return 0;
}