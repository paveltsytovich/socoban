#pragma once
#include "GameObject.h"
#include "GameSpace.h"
class Target :
	public GameObject
{
public:
	Target(const GameSpace* owner,int ax,int ay);
	~Target();
	bool CheckCollision(int x, int y);
	void Move(int newX, int newY);
};

