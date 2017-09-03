#pragma once
#include<FL/fl_draw.H>
#include<vector>
class ImageRepository
{
private:
	std::vector<Fl_Image*> Storage;
public:
	ImageRepository();
	~ImageRepository();
	const Fl_Image* GetImage(int index);

};

