#include "GameSpace.h"


GameSpace::GameSpace()
{
}


GameSpace::~GameSpace()
{
}

GameObject* GameSpace::GetGameObject(int x,int y)
{
	for (GameObject* currentObject : GameObjects)
	{
		if (currentObject->IsPlace(x, y))
			return currentObject;
	}
	return nullptr;
}
void GameSpace::AddGameObject(GameObject *object)
{
	GameObjects.push_back(object);
}