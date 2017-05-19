#include "Wall.h"


Wall::Wall(const GameSpace* owner,int ax, int ay, int w, int h) : GameObject(owner,ax, ay), width(w), height(h)
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

bool Wall::IsPlace(int ax, int ay)
{
	int x = GetX();
	int y = GetY();
	return false;
}