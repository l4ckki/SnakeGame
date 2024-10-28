#include <vector>
#include "Field.h"
#include <iostream>

Field::Field()
{
	std::vector<char> rowField(columns);

	for (int i = 0; i < rowField.size(); i++)
	{
		rowField[i] = charCell;
	}
	for (int i = 0; i < rows; i++)
	{
		this->field.push_back(rowField);
	}
}

std::vector<std::vector<char>> Field::PrintField()
{
	for (int i = 0; i < this->field.size(); i++)
	{
		for (int j = 0; j < FIELD_COLUMN; j++)
		{
			std::cout << this->field[i][j];
		}

		std::cout << '\n';
	}

	return this->field;
}

Apple Field::AddAppleToField(Apple& apple)
{
	Coordinates appleCoordinates = apple.GetCoordinates();
	field[appleCoordinates.y][appleCoordinates.x] = CHAR_APPLE;

	return apple;
}

Snake Field::AddSnakeToField(Snake& snake)
{
	Coordinates snakeHeadCoordinates = snake.GetCoordinates();

	return snake;
}