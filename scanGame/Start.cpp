#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{
	sf::Window window;
	window.create(sf::VideoMode(1000, 800), "My Window");
	window.setTitle( "Ingo Engine 2018" );
	// render loop baby
	Game game;
	while (window.isOpen())
	{
		//FIRST::
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
		}
		//SECOND:: play the game.
		
		game.Go();
	}

	return 0;
}