#ifndef FIXED_HPP 
# define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int value;
        static const int literal_value = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& obj);
        Fixed& operator=(const Fixed& obj);
        int getRawBits( void ) const;

        Fixed(const int integer);
        Fixed(const float floating);
        float toFloat( void ) const;
        int toInt( void ) const;
};


std::ostream&    operator<<(std::ostream& output, const Fixed& input);

#endif