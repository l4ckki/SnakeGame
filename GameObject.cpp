#include "GameObject.h"
#include "Coordinates.h"

Coordinates GameObject::GetCoordinates()
{
	Coordinates gameObjectCoordinates;

	gameObjectCoordinates.x = x;
	gameObjectCoordinates.y = y;

	return gameObjectCoordinates;
}
