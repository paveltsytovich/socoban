#pragma once
class GameObject
{
private:
	int x, y;
public:
	GameObject();
	GameObject(int x,int y);
	virtual ~GameObject();
	bool CheckCollisions(int x, int y);
};

