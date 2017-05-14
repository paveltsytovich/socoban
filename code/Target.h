#pragma once
#include "GameObject.h"
class Target :
	public GameObject
{
public:
	Target(int ax,int ay);
	~Target();
	bool CheckCollision(int x, int y);
	void Move(int newX, int newY);
};

