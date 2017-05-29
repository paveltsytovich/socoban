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
	if ((x <= ax && ax < x + width) && (y <= ay && ay < y + height))
	{
		return true;
	}
	else
		return false;

}