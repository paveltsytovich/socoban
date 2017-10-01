#pragma once
#include <Fl/Fl_Window.H>
#include "ImageRepository.H"
class GameWidget :
	public Fl_Window
{
	int PictureId;
	ImageRepository* Repo;
public:
	GameWidget(int PictureId,ImageRepository* Repo);
	
	~GameWidget();
protected:
	void draw() override;//ф-я перекрыта переопредел. метеод, вызыв-ся, когда нужно нарис что-л в окне
	
};

