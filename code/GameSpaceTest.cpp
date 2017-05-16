#include <gtest/gtest.h>
#include "Box.h"
#include "Wall.h"
#include "GameSpace.h"
TEST(GameSpaceTest, AddBoxToGameSpace)
{
	Box* b = new Box(1,2); 
	GameSpace* g = new GameSpace;
	g->AddGameObject(b);
	GameObject* actual=g->GetGameObject(1,2);
	ASSERT_TRUE(actual != nullptr);
}
TEST(GamespaceTest, AddWallToGameSpace)
{
	Wall* w = new Wall(1, 5, 10, 20);
	GameSpace* g = new GameSpace;
	g->AddGameObject(w);
	GameObject* actual = g->GetGameObject(3, 7);
	ASSERT_TRUE(actual != nullptr);
}
