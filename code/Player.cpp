#include "Player.h"


Player::Player(GameSpace* owner, int ax, int ay) :GameObject(owner,ax,ay)
{
}


Player::~Player()
{
}

bool Player::CheckCollision(int x, int y)
{
	return true;
}

void Player::Move(int newX, int newY)
{
	GameObject *go = GetGameSpace()->GetGameObject(newX, newY);
	if (go != nullptr)
	{
		if (go->CheckCollision(newX, newY))
			return;
		int deltaX = newX - GetX();
		int deltaY = newY - GetY();
		go->Move(newX+deltaX,newY+deltaY);
	}
	SetX(newX);
	SetY(newY);
}