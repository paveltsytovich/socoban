#include "GameSpace.h"


GameSpace::GameSpace()
{
}


GameSpace::~GameSpace()
{
}

GameObject* GameSpace::GetGameObject(int x,int y)
{
	return nullptr;
}
void GameSpace::AddGameObject(GameObject *object)
{
	GameObjects.push_back(object);
}