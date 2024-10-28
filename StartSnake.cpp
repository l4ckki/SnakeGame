#include <iostream>
#include <vector>
#include <iterator>
#include <random>
#include <conio.h>
#include <windows.h>
#include <deque>

#include "GameObject.h"
#include "Coordinates.h"
#include "GameSettings.h"
#include "Field.h"
#include "Apple.h"
#include "Snake.h"

void ShowConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO	cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag;
	SetConsoleCursorInfo(out, &cursorInfo);
}

void ClearScreen()
{
	system("cls");
}

int main()
{	
	ShowConsoleCursor(false);

	Field gameField;

	Apple apple(1, 0);
	gameField.AddAppleToField(apple);

	Snake snake(3, 3);
	gameField.AddSnakeToField(snake);

	while (PLAYING)
	{	
		Sleep(SNAKE_DELAY);
		ClearScreen();
		snake.MoveSnake();


		gameField.PrintField();
	}

	return 0;
}