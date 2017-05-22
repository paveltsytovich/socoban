#include <gtest/gtest.h>
#include "GameSpace.h"
#include "Player.h"
#include "Wall.h"
#include "Box.h"

TEST(PlayerTest, PlayerMoveToFreeField)
{
	GameSpace* g = new GameSpace;
	Player* p = new Player(g, 1, 2);
	g->AddGameObject(p);
	p->Move(2, 2);
	ASSERT_EQ(p->GetX(), 2);
	ASSERT_EQ(p->GetY(), 2);
}
TEST(PlayerTest, PlayerStoppedNearWall)
{
	GameSpace* g = new GameSpace;
	Wall* w = new Wall(g, 3, 4,10,10);
	Player* p = new Player(g,5, 14);
	g->AddGameObject(w);
	g->AddGameObject(p);
	p->Move(5, 13);
	ASSERT_EQ(p->GetX(), 5);
	ASSERT_EQ(p->GetY(), 14);


}
TEST(PlayerTest, PlayerMoveBox)
{
	GameSpace * g = new GameSpace;
	Box *b = new Box(g,4, 4);
	Player *p = new Player(g, 4, 5);
	g->AddGameObject(b);
	g->AddGameObject(p);
	p->Move(4, 4);

	ASSERT_EQ(p->GetX(), 4);
	ASSERT_EQ(p->GetY(), 4);

	ASSERT_EQ(b->GetX(), 4);
	ASSERT_EQ(b->GetY(), 3);
}