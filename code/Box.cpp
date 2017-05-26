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
	int x = GetX();
	int y = GetY();
	switch (direction)
	{
	case Up:
		y--;
		break;
	case Down:
		y++;
		break;
	case Right:
		x++;
		break;
	case Left:
		x--;
		break;
	}
	GameObject *go = GetGameSpace()->GetGameObject(x, y);
	if (go != nullptr)
	{
		return go->CheckCollision(direction);
	}
	return false;
}

void Box::Move(Direction direction)
{
	int x = GetX();
	int y = GetY();
	switch (direction)
	{
	case Up:
		SetY(y - 1);
		break;
	case Down:
		SetY(y + 1);
		break;
	case Right:
		SetX(x + 1);
		break;
	case Left:
		SetX(x - 1);
		break;
	}
}