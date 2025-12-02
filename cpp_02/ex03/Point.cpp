#include "Point.hpp"

Point::Point()
{}

Point::Point(float X, float Y) : x(X), y(Y)
{}

Point::Point(const Point &other) : x(other.x), y(other.y) 
{}

// A REVOIR
Point &Point::operator=(const Point &other)
{
	(void)other;
	return (*this);
}

Point::~Point()
{}
