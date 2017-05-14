#pragma once
#include "GameObject.h"
class Wall :
	public GameObject
{
	int width, height;
public:
	Wall(int ax, int ay,int w,int h);
	~Wall();
	bool CheckCollision(int x, int y);
	void Move(int neX, int newY);
};

