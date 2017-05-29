#include "Player.h"


Player::Player(GameSpace* owner, int ax, int ay) :GameObject(owner,ax,ay)
{
}


Player::~Player()
{
}

bool Player::CheckCollision(Direction)
{
	return true;
}

void Player::Move(Direction direction)
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
		if (go->CheckCollision(direction))
			return;
		go->Move(direction);
	}
	SetX(x);
	SetY(y);
}