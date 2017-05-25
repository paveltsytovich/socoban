#include "Target.h"


Target::Target(GameSpace* owner, int ax, int ay) :GameObject(owner,ax,ay)
{
}


Target::~Target()
{
}

bool Target::CheckCollision(int x, int y)
{
	return false;
}

void Target::Move(int newX, int newY)
{

}