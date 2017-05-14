#pragma once
#include "GameObject.h"
class Player :
	public GameObject
{
public:
	Player(int ax,int ay);
	~Player();
	bool CheckCollision(int x, int y);
	void Move(int newX, int newY);
};


