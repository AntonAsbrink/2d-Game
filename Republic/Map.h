#ifndef MAP_H
#define MAP_H

#include "SFML/Graphics.hpp"
#include "TextureManager.h"

class Map {
private:
	int sizeX, sizeY;

	std::vector<sf::RectangleShape*> tiles;

	sf::Vector2f origin;
public:
	Map(int sizeX, int sizeY);

	void render(sf::RenderWindow& window);
};

#endif // !MAP_H