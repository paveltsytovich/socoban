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
TEST(PlayerTest, PlayerTryToMoveTwoBox)
{
	GameSpace *g = new GameSpace;
	Player *p = new Player(g,3, 10);
	Box *b1 = new Box(g, 3, 9);
	Box *b2 = new Box(g, 3, 8);

	g->AddGameObject(p);
	g->AddGameObject(b1);
	g->AddGameObject(b2);

	p->Move(GameObject::Direction::Up);

	ASSERT_EQ(p->GetX(), 3);
	ASSERT_EQ(p->GetY(), 10);
}

TEST(PlayerTest, PlayerMoveBoxToTarget)
{
	GameSpace *g = new GameSpace;
	Player *p = new Player(g, 3, 10);
	Box *b = new Box(g, 3, 9);
	Target *t = new Target(g, 3, 8);

	g->AddGameObject(p);
	g->AddGameObject(b);
	g->AddGameObject(t);

	p->Move(GameObject::Direction::Up);

	ASSERT_EQ(p->GetX(), 3);
	ASSERT_EQ(p->GetY(), 9);
}

TEST(PlayerTest, PlayerMoveNearWall)
{
	GameSpace* g = new GameSpace;
	Wall* w = new Wall(g, 3, 4, 10, 10);
	Player* p = new Player(g, 15, 15);
	g->AddGameObject(w);
	g->AddGameObject(p);
	p->Move(GameObject::Direction::Up);
	ASSERT_EQ(p->GetX(), 15);
	ASSERT_EQ(p->GetY(), 14);
}