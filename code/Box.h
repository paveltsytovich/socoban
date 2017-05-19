#pragma once
#include "GameObject.h"
class Box :
	public GameObject
{
public:
	Box(const GameSpace* owner,int ax,int ay);
	~Box();
	bool CheckCollision(int x, int y);
	void Move(int x, int y);
};

