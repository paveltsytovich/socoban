#include <gtest/gtest.h>
#include "Box.h"
#include "Wall.h"
#include "GameSpace.h"
TEST(GameSpaceTest, AddBoxToGameSpace)
{ 
	GameSpace* g = new GameSpace;
	Box* b = new Box(g,1, 2);
	g->AddGameObject(b);
	GameObject* actual=g->GetGameObject(1,2);
	ASSERT_TRUE(actual != nullptr);
}
TEST(GamespaceTest, AddWallToGameSpace)
{
	GameSpace* g = new GameSpace;
	Wall* w = new Wall(g,1, 5, 10, 20);
	g->AddGameObject(w);
	GameObject* actual = g->GetGameObject(3, 7);
	ASSERT_TRUE(actual != nullptr);
}
