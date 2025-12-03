#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);
float calculateArea(Point const a, Point const b, Point const c);

void printPoints(Point a, Point b, Point c, Point p)
{
	Point array[4] = {a, b, c, p};
	char labels[4] = {'a', 'b', 'c', 'p'};
	int minX = 0;
	int minY = 0;
	int maxX = 0;
	int maxY = 0;
		
	for (int i = 0; i < 4; i++)
	{
		if (roundf(array[i].GetX()) > maxX)
			maxX = roundf(array[i].GetX());
		if (roundf(array[i].GetY()) > maxY)
			maxY = roundf(array[i].GetY());
		if (roundf(array[i].GetX()) < minX)
			minX = roundf(array[i].GetX());
		if (roundf(array[i].GetY()) < minY)
			minY = roundf(array[i].GetY());
	}
	for (int y = minY; y <= maxY; y++)
	{
		for (int x = minX; x <= maxX; x++)
		{
			bool printed = false;
			for (int i = 0; i < 4; i++)
			{
				if (roundf(array[i].GetX()) == x && roundf(array[i].GetY()) == y)
				{
					std::cout << labels[i];
					printed = true;
					break;
				}
			}
			if (!printed)
				std::cout << ".";
		}
		std::cout << std::endl;
	}
	
}

int main(void)
{
	Point a(0.4, 5.97);
	Point b(0.84, 9.12);
	Point c(6, 8.88);
	Point p(7, 8);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "p : " << p << std::endl;
	printPoints(a, b, c, p);

	std::cout << "The point p is " << (bsp(a, b, c, p) ? "inside" : "outside") << " abc triangle." << std::endl;
	return (0);
}