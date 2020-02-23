#include "Renderer.h"
#include "Logs.h"
#include "GameMachine.h"

void Renderer::init()
{
	if (!playerTexture.loadFromFile("IMG/Player.png") || !mapTexture.loadFromFile("IMG/Floor.jpg"))
	{
		LOG_ERROR("Can't load the file!");
	}

	mapTexture.setRepeated(true);
	mapSprite.setTexture(mapTexture);
	mapSprite.setTextureRect(sf::IntRect(0, 0, 2250, 2250));

	playerTexture.setSmooth(true);
	playerSprite.setTexture(playerTexture);


	/*sf::RenderWindow window(sf::VideoMode(1920, 1080), "2D Game");
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
*/
};

void Renderer::update(GameMachine * resource)
{
	resource->window.clear();
	resource->window.draw(mapSprite);
	resource->window.draw(playerSprite);
	resource->window.display();


	//draw
};

void Renderer::updateHealth()
{

};

void Renderer::updateHero()
{

};

void Renderer::lookAtMouse(sf::Sprite* sprite)
{
	sf::Vector2f spritePos = sprite->getPosition();
	sf::Vector2f mousePos;

	//TODO mousePos
	
	const float PI = 3.14159265;

	float dx = spritePos.x - mousePos.x;
	float dy = spritePos.y - mousePos.y;

	float rotation = (atan2(dy, dx)) * 180 / PI;
	sprite->setRotation(rotation);
};