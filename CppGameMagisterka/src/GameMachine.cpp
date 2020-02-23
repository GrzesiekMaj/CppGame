#include <stdio.h>
#include "GameMachine.h"
#include "Renderer.h"
#include "Logs.h"


void GameMachine::prepareMap() {

}

void GameMachine::prepareHero() {

}

void GameMachine::run() {

	this->prepareMap();

	Renderer WorldRender;

	WorldRender.init();

	sf::Time stopTime;
	sf::Time targetTime = sf::milliseconds(1000 / 60);
	sf::Clock clock;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		clock.restart();

		WorldRender.update(this);

		stopTime = clock.getElapsedTime();
		sf::sleep(targetTime - stopTime);
	}

};

