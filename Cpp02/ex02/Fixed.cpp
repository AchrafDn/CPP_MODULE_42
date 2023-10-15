#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(): value(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& obj): value(obj.value) {}

Fixed::Fixed(const int integer): value(integer << literal_value) {}

Fixed::Fixed(const float floating): value(static_cast<int>(roundf(floating * (1 << literal_value)))) {}

Fixed&  Fixed::operator=(const Fixed& obj)
{
    if (this != &obj)
        this->value = obj.value;
    return (*this);
}

int Fixed::getRawBits() const
{
    return value;
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

bool Fixed::operator>(const Fixed& obj) const
{
    return this->toFloat() > obj.toFloat();
}

bool Fixed::operator<(const Fixed& obj) const
{
    return this->toFloat() < obj.toFloat();
}


bool Fixed::operator>=(const Fixed& obj) const
{
    return this->toFloat() >= obj.toFloat();
}

bool Fixed::operator<=(const Fixed& obj) const
{
    return this->toFloat() <= obj.toFloat();
}

bool Fixed::operator==(const Fixed& obj) const
{
    return this->toFloat() == obj.toFloat();
}

bool Fixed::operator!=(const Fixed& obj) const
{
    return this->toFloat() != obj.toFloat();
}

Fixed Fixed::operator+(const Fixed& obj) const
{
    Fixed res(this->toFloat() + obj.toFloat());
    return res;
}

Fixed Fixed::operator-(const Fixed& obj) const
{
    Fixed res(this->toFloat() - obj.toFloat());
    return res;
}

Fixed Fixed::operator*(const Fixed& obj) const
{
    Fixed res(this->toFloat() * obj.toFloat());
    return res;
}

Fixed Fixed::operator/(const Fixed& obj) const
{
    Fixed res(this->toFloat() / obj.toFloat());
    return res;
}

Fixed& Fixed::operator++()
{
    this->value++;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed   temp(this->toFloat());
    this->value++;
    return  temp;
}

Fixed& Fixed::operator--()
{
    this->value--;
    return(*this);
}

Fixed Fixed::operator--(int)
{
    Fixed   temp(this->toFloat());
    this->value--;
    return  temp;
}

Fixed&  Fixed::min(Fixed& num1, Fixed& num2)
{
    if ((num1.value - num2.value) >= 0)
        return num2;
    else
        return num1;
}

const Fixed&  Fixed::min(const Fixed& num1, const Fixed& num2)
{
    if ((num1.value - num2.value) >= 0)
        return num2;
    else
        return num1;
}

Fixed&  Fixed::max(Fixed& num1, Fixed& num2)
{
    if ((num1.value - num2.value) >= 0)
        return num1;
    else
        return num2;
}

const Fixed&  Fixed::max(const Fixed& num1, const Fixed& num2)
{
    if ((num1.value - num2.value) >= 0)
        return num1;
    else
        return num2;
}