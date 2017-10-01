#include "GameWidget.h"


GameWidget::GameWidget(int PictureId, ImageRepository* Repo) : PictureId(PictureId), Repo(Repo)
{
	
}
void GameWidget::draw()
{
	const Fl_Image* picture = Repo->GetImage(PictureId);

}

GameWidget::~GameWidget()
{
}
