#include "GameWidget.h"


GameWidget::GameWidget(int PictureId, ImageRepository* Repo) : Fl_Window(10,10, ""), PictureId(PictureId), Repo(Repo)
{
	
}
void GameWidget::draw()
{
	const Fl_Image* picture = Repo->GetImage(PictureId);

}

GameWidget::~GameWidget()
{
}
