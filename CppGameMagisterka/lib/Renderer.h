#pragma once

#include <SFML/Graphics.hpp>
#include "GameMachine.h"

class Renderer
{
public:

	sf::View cameraView;
	sf::Texture playerTexture, mapTexture, swordTexture, angry, dead;
	sf::Sprite playerSprite, mapSprite, swordSprite;
	sf::RectangleShape healthbar[10], healthbarBackground[10];
	sf::Text health;
	sf::Font font;

	void init();
	void update(GameMachine * resource);
	void tearDown();

private:
	void lookAtMouse(sf::Sprite*);
	void updateHero();
	void updateHealth();
};