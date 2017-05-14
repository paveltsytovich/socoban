#pragma once
class GameObject
{
private:
	int x, y;
public:
	GameObject(int ax, int ay) :
		x(ax), y(ay){}
	virtual ~GameObject();
	virtual bool CheckCollisions(int x, int y)=0;
	virtual void Move()=0;//абстрактный метод
};



