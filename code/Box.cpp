#include "Box.h"
#include"GameSpace.h"


Box::Box(GameSpace*owner, int ax, int ay) :GameObject(owner,ax,ay)
{

}


Box::~Box()
{
}

bool Box::CheckCollision(Direction direction)
{

	return true;
}

void Box::Move(Direction direction)
{

}