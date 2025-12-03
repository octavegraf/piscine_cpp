#include "Point.hpp"
#include <cmath>

float calculateArea(Point const a, Point const b, Point const c)
{
	float aX = a.GetX();
	float aY = a.GetY();
	float bX = b.GetX();
	float bY = b.GetY();
	float cX = c.GetX();
	float cY = c.GetY();

	return (((aX * (bY - cY)) + (bX * (cY - aY)) + (cX * (aY - bY))) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point const& p = point;
	float areaABC = fabsf(calculateArea(a, b, c));
	float areaPABC = fabsf(calculateArea(a, b, p)) + fabsf(calculateArea(a, c, p)) + fabsf(calculateArea(b, c, p));
	
	if (roundf(areaABC) == roundf(areaPABC))
		return (true);
	else
		return (false);
}