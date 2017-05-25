#pragma once
# include "GameSpace.h"
class GameObject
{
private:
	int x, y;
	GameSpace * gs;
protected:
	void SetX(int value){ x = value; }
	void SetY(int value){ y = value; }
	GameSpace * GetGameSpace() { return gs; }
public:
	GameObject(GameSpace* owner,int ax, int ay) :
		gs(owner),x(ax), y(ay){}
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



