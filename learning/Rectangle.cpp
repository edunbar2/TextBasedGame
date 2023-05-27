#include "Rectangle.h"

void Rectangle::setLength(double l)
{
	length = l;
}

void Rectangle::setWidth(double l)
{
	width = l;
}

double Rectangle::getLength() const{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getArea() const
{
	return length * width;
}
