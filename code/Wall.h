#pragma once
#include "GameObject.h"
#include "GameSpace.h"
class Wall :
	public GameObject
{
	int width, height;
public:
	Wall(GameSpace* owner, int ax, int ay,int w,int h);
	~Wall();
	bool CheckCollision(Direction);
	void Move(Direction);
	bool IsPlace(int ax, int ay);
};

