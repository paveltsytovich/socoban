#include "Target.h"


Target::Target(GameSpace* owner, int ax, int ay) :GameObject(owner,ax,ay)
{
}


Target::~Target()
{
}

bool Target::CheckCollision(int x, int y)
{
	return 0;
}

void Target::Move(int newX, int newY)
{

}