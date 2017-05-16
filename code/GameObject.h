#pragma once
class GameObject
{
private:
	int x, y;
public:
	GameObject(int ax, int ay) :
		x(ax), y(ay){}
	virtual ~GameObject() {}
	virtual bool CheckCollision(int x, int y)=0;
	virtual void Move(int x,int y) = 0;//абстрактный метод
	int GetX(){
		return x;
	};
	int GetY(){
		return y;
	};
	virtual bool IsPlace(int ax, int ay)
	{
		return ax == x && ay == y;
	}
};



