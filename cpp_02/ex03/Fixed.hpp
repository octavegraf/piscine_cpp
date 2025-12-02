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
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	private:
	int FixedPoint;
	static const int FractionalBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);