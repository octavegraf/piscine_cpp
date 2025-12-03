#include "Point.hpp"

Point::Point() : x(0), y(0)
{}

Point::Point(float X, float Y) : x(X), y(Y)
{}

Point::Point(const Point &other) : x(other.x), y(other.y) 
{}

Point &Point::operator=(const Point &other)
{
	(void)other;
	return (*this);
}

Point::~Point()
{}

float Point::GetX() const
{
	return (x.toFloat());
}

float Point::GetY() const
{
	return (y.toFloat());
}

std::ostream &operator<<(std::ostream &out, const Point &point)
{
	out << "x = " << point.GetX() << " y = " << point.GetY();
	return (out);
}
