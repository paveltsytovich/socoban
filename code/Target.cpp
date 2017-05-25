#include "Target.h"


Target::Target(GameSpace* owner, int ax, int ay) :GameObject(owner,ax,ay)
{
}


Target::~Target()
{
}

bool Target::CheckCollision(Direction)
{
	return false;
}

void Target::Move(Direction)
{

}