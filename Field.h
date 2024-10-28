#ifndef FIELD_H
#define FIELD_H

#include <vector>
#include "GameSettings.h"
#include "Apple.h"
#include "Snake.h"

class Field
{
public:
	Field() { }

	std::vector<std::vector<char>> PrintField();
	Apple AddAppleToField(Apple& apple);
	Snake AddSnakeToField(Snake& snake);

private:
	int rows = FIELD_ROW;
	int columns = FIELD_COLUMN;
	char charCell = FIELD_CELL;
	std::vector<std::vector<char>> field;
};
#endif