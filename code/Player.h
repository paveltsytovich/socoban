#pragma once
#include "GameObject.h"
#include "GameSpace.h"
class Player :
	public GameObject
{
public:
	Player(GameSpace* owner,int ax,int ay);
	~Player();
	bool CheckCollision(int x, int y);
	void Move(int newX, int newY);
};


