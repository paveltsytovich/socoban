#pragma once
#include "GameObject.h"
#include <vector>
class GameSpace
{
private:
	std::vector<GameObject*> GameObjects;
public:
	GameSpace();
	~GameSpace();
	GameObject* GetGameObject(int x, int y);
	void AddGameObject(GameObject* GameObject);
};

