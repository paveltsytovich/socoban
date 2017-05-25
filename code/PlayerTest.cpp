#include <gtest/gtest.h>
#include "GameSpace.h"
#include "Player.h"
#include "Wall.h"
#include "Box.h"
#include "Target.h"
TEST(PlayerTest, PlayerMoveToFreeField)
{
	GameSpace* g = new GameSpace;
	Player* p = new Player(g, 1, 2);
	g->AddGameObject(p);
	p->Move(GameObject::Direction::Down);
	ASSERT_EQ(p->GetX(), 1);
	ASSERT_EQ(p->GetY(), 3);
}
TEST(PlayerTest, PlayerStoppedNearWall)
{
	GameSpace* g = new GameSpace;
	Wall* w = new Wall(g, 3, 4,10,10);
	Player* p = new Player(g,5, 14);
	g->AddGameObject(w);
	g->AddGameObject(p);
	p->Move(GameObject::Direction::Up);
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
	p->Move(GameObject::Direction::Up);

	ASSERT_EQ(p->GetX(), 4);
	ASSERT_EQ(p->GetY(), 4);

	ASSERT_EQ(b->GetX(), 4);
	ASSERT_EQ(b->GetY(), 3);
}
TEST(PlayerTest, PlayerGoToTarget)
{
	GameSpace *g = new GameSpace();
	Target *t = new Target(g,2, 2);
	Player *p = new Player(g,2, 3);
	g->AddGameObject(t);
	g->AddGameObject(p);

	p->Move(GameObject::Direction::Up);

	ASSERT_TRUE(t->GetX() == p->GetX());
	ASSERT_TRUE(t->GetY() == p->GetY());
}