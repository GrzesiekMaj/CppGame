#pragma once
#include <SFML/Graphics.hpp>

const int GAME_WIDTH = 1900, GAME_HEIGHT = 1000;

class GameMachine
{
public:

	sf::RenderWindow window;

	void run();
	void prepareMap();
	void prepareHero();

	GameMachine() : window(sf::VideoMode(GAME_WIDTH, GAME_HEIGHT), "2D GAME") {};

};