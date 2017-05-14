#include "Target.h"


Target::Target(int ax, int ay) :GameObject(ax,ay)
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