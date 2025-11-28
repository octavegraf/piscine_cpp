#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int entry)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(entry << FractionalBits);
}

Fixed::Fixed(const float entry)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits((int)roundf(entry * (1 << FractionalBits)));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(other.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(other.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	return (FixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	FixedPoint = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

int Fixed::toInt() const
{
	return (FixedPoint >> FractionalBits);
}

float Fixed::toFloat() const
{
	return ((float)FixedPoint / (1 << FractionalBits));
}
