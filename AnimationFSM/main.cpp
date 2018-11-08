#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>

using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
	int YRectangleTexture = 3;
	// Load a sprite to display
	sf::Texture texture;
	if (!texture.loadFromFile("assets\\grid.png")) {
		DEBUG_MSG("Failed to load file");
		return 0;
	}

	// Setup Players Default Animated Sprite
	AnimatedSprite animated_sprite(texture);
	// Setup the Player
	Player player(animated_sprite);
	Input input;
	
	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				// Close window : exit
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				{
					input.setCurrent(Input::Action::LEFT);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				{
					input.setCurrent(Input::Action::RIGHT);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					input.setCurrent(Input::Action::CLIMBING);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
				{
					input.setCurrent(Input::Action::SHOVELING);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
				{
					input.setCurrent(Input::Action::HAMMERING);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
				{
					input.setCurrent(Input::Action::WALKING);
				}

				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
				{
					input.setCurrent(Input::Action::SWORDMANSHIP);
				}
				break;
			default:
				input.setCurrent(Input::Action::IDLE);
				
				break;
			}
		}

		// Handle input to Player
		player.handleInput(input);

		// Update the Player
		player.update();

		// Clear screen
		window.clear();

		// Draw the Players Current Animated Sprite
		window.draw(player.getAnimatedSprite());

		// Update the window
		window.display();
	}

	return 1;
};