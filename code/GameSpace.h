#pragma once
#include "GameObject.h"
class GameSpace
{
public:
	GameSpace();
	~GameSpace();
	GameObject* GetGameObject(int x, int y);
	void AddGameObject(GameObject* GameObject);
};

