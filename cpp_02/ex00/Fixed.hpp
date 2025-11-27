#pragma once

#include <iostream>

class Fixed
{
	public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
	private:
	int FixedPoint;
	static const int FractionalBits;
};