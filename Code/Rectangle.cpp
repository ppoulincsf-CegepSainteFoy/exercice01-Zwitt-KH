#include "stdafx.h"
#include "Rectangle.h"

Rectangle::Rectangle()
{
	length = 1;
	width = 1;
}

Rectangle::Rectangle(int length, int width)
{
	setLength(length);
	setWidth(width);
}

void Rectangle::setLength(int _length)
{
	length = _length;
}

void Rectangle::setWidth(int _witdth)
{
	width = _witdth;
}

int Rectangle::getLength() const 
{
	return length;
}

int Rectangle::getWidth() const 
{
	return width;
}

int Rectangle::getArea() const 
{
	return length * width;
}

int Rectangle::getPerimeter() const
{
	return length * 2 + width * 2;
}

Rectangle::~Rectangle() {}