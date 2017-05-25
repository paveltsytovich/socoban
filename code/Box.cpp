#include "Box.h"
#include"GameSpace.h"


Box::Box(GameSpace*owner, int ax, int ay) :GameObject(owner,ax,ay)
{

}


Box::~Box()
{
}

bool Box::CheckCollision(int x, int y)
{

	return 0;
}

void Box::Move(int x, int y)
{

}