#include "Wall.h"


Wall::Wall(int ax, int ay, int w, int h) : GameObject(ax, ay), width(w), height(h)
{
}


Wall::~Wall()
{

}
bool Wall::CheckCollision(int x, int y)
{
	return 0;
}

void Wall::Move(int newX, int newY)
{

}
