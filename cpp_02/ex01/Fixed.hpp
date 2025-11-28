#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	public:
	Fixed();
	Fixed(const int entry);
	Fixed(const float entry);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits() const;
	void setRawBits(int const raw);
	private:
	int FixedPoint;
	static const int FractionalBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);