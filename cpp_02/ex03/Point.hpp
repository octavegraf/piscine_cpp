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
	float GetX() const;
	float GetY() const;

	private:
	Fixed const x;
	Fixed const y;
};

std::ostream &operator<<(std::ostream &out, const Point &point);