#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H


class GameObject
{
public:
	GameObject(int x, int y) { this->x = x; this->y = y; }
	Coordinates GetCoordinates();

protected:
	int x;
	int y;
};

#endif
