#include "ImageRepository.h"
#include <Fl/Fl_PNG_Image.H>

ImageRepository::ImageRepository()
{
	Fl_Image *newImage;
	newImage = new Fl_PNG_Image("Socoban.png");
	Storage.push_back(newImage);
	
	newImage = new Fl_PNG_Image("Box.png");
	Storage.push_back(newImage);

	newImage = new Fl_PNG_Image("Target.png");
	Storage.push_back(newImage);

	newImage = new Fl_PNG_Image("Wall.png");
	Storage.push_back(newImage);

} 

const Fl_Image* ImageRepository::GetImage(int index)
{
	return Storage[index];
}
ImageRepository::~ImageRepository()
{
}
