#include <iostream>
#include <SFML/Graphics.hpp>

#define IMG = "S:\DEV-ZONE\CppGameMagisterka\CppGameMagisterka\IMG";

using namespace std;

int main()
{
		sf::RenderWindow window(sf::VideoMode(1920, 1080), "2D Game");
		sf::Texture background, player;
		background.loadFromFile("IMG/Floor.jpg");
		background.setRepeated(true);
		player.loadFromFile("IMG/player.png");
		player.setSmooth(true);

		sf::Sprite backgroundSprite(background);
		backgroundSprite.setTextureRect(sf::IntRect(0, 0, 2250, 2250));
		sf::Sprite playerSprite(player);

		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					window.close();
			}

			window.clear();
			window.draw(backgroundSprite);
			window.draw(playerSprite);
			window.display();

		}

		return 0;
}