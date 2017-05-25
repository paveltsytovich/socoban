#include "Wall.h"


Wall::Wall(GameSpace* owner,int ax, int ay, int w, int h) : GameObject(owner,ax, ay), width(w), height(h)
{
}


Wall::~Wall()
{

}
bool Wall::CheckCollision(Direction)
{
	return true;
}

void Wall::Move(Direction)
{

}

bool Wall::IsPlace(int ax, int ay)
{
	int x = GetX();
	int y = GetY();
	if (ax == x && ay < y)
	{
		return false;
	}
	else 
	return true;
	if (ay == y && ax < x)
	{
		return false;
	}
	else
		return true;

}