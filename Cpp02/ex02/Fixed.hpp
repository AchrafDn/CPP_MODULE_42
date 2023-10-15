#ifndef FIXED_HPP 
# define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int 				value;
        static const int	literal_value = 8;
    public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& obj);
		Fixed&				operator=(const Fixed& obj);
		int					getRawBits( void ) const;

		Fixed(const int integer);
		Fixed(const float floating);
		float				toFloat( void ) const;
		int					toInt( void ) const;

		bool				operator>(const Fixed& obj) const;
		bool				operator<(const Fixed& obj) const;
		bool				operator>=(const Fixed& obj) const;
		bool				operator<=(const Fixed& obj) const;
		bool				operator==(const Fixed& obj) const;
		bool				operator!=(const Fixed& obj) const;
		Fixed				operator+(const Fixed& obj) const;
		Fixed				operator-(const Fixed& obj) const;
		Fixed				operator*(const Fixed& obj) const;
		Fixed				operator/(const Fixed& obj) const;

		Fixed				operator++(int);
		Fixed&				operator++();
		Fixed				operator--(int);
		Fixed&				operator--();

		static Fixed& 		min(Fixed& num1, Fixed& num2);
		static const Fixed& min(const Fixed& num1, const Fixed& num2);
		static Fixed& 		max(Fixed& num1, Fixed& num2);
		static const Fixed& max(const Fixed& num1, const Fixed& num2);
};


std::ostream&    operator<<(std::ostream& output, const Fixed& input);

#endif