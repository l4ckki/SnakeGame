#ifndef SNAKE_H
#define SNAKE_H

#include <deque>
#include "Coordinates.h"
#include "GameObject.h"
#include "GameSettings.h"

class SnakeBody : public GameObject
{
public:
	using GameObject::GameObject;
	char bodyChar = SNAKE_BODY;
};

class Snake : public GameObject
{
public:
	Snake(int x, int y) : GameObject(x, y) { }
	void MoveSnake();
private:
	Coordinates headCoordinates;
	char headDirection = UP_DIRECTION;
	int snakeLength = SNAKE_START_LENGTH;
	std::deque<SnakeBody> snakeContainer;
	void MoveUp() { headCoordinates.y--; };
	void MoveDown() { headCoordinates.y++; };
	void MoveLeft() { headCoordinates.x--; };
	void MoveRight() { headCoordinates.x++; };
};
#endif