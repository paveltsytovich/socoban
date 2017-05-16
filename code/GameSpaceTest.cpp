#include <gtest/gtest.h>
#include "Box.h"
#include "GameSpace.h"
TEST(GameSpaceTest, AddBoxToGameSpace)
{
	Box* b = new Box(1,2); 
	GameSpace* g = new GameSpace;
	g->AddGameObject(b);
	GameObject* actual=g->GetGameObject(1,2);
	ASSERT_TRUE(actual != nullptr);
}
