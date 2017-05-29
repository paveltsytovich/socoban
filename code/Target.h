#pragma once
#include "GameObject.h"
#include "GameSpace.h"
class Target :
	public GameObject
{
public:
	Target(GameSpace* owner,int ax,int ay);
	~Target();
	bool CheckCollision(Direction);
	void Move(Direction);
};

