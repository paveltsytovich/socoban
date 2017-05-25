#pragma once
#include "GameObject.h"
class Box :
	public GameObject
{
public:
	Box(GameSpace* owner,int ax,int ay);
	~Box();
	bool CheckCollision(Direction);
	void Move(Direction);
};

