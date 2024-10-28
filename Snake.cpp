#include "Snake.h"

Snake::Snake(int x, int y) : GameObject(x, y)
{
	SnakeBody snakeBody(x, y);
	snakeContainer.push_front(snakeBody);
	for (int i = 0; i < SNAKE_START_LENGTH; i++)
	{
		Coordinates snakeBodyCoordinates = snakeBody.GetCoordinates();
		SnakeBody snakeBody(snakeBodyCoordinates.x--, snakeBodyCoordinates.y--);
		snakeContainer.push_back(snakeBody);
	}
}

void Snake::MoveSnake()
{
	if (headDirection == UP_DIRECTION)
	{
		MoveUp();
	}
	else if (headDirection == DOWN_DIRECTION)
	{
		MoveDown();
	}
	else if (headDirection == LEFT_DIRECTION)
	{
		MoveLeft();
	}
	else if (headDirection == RIGHT_DIRECTION)
	{
		MoveRight();
	}

}