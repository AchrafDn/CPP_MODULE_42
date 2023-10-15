#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = obj.value;
}

Fixed&  Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
	    this->value = obj.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
    return value;
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    value = integer << literal_value;
}

Fixed::Fixed(const float floating)
{
    std::cout << "Float constructor called" << std::endl;
    value = static_cast<int>(roundf(floating * (1 << literal_value)));
}

int Fixed::toInt( void ) const
{
    return value >> literal_value;
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(value) / (1 << literal_value);
}

std::ostream&    operator<<(std::ostream& output, const Fixed& input)
{
    output << input.toFloat();
    return output;
}

