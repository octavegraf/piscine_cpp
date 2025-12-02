#pragma once

#include "Fixed.hpp"

class Point
{
	public:
	Point();
	Point(float X, float Y);
	Point(const Point &other);
	Point &operator=(const Point &other);
	~Point();

	private:
	Fixed const x = 0;
	Fixed const y = 0;
};