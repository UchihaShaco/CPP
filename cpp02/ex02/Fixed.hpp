#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	fixedPointNum;
	static const int	fraction_bits = 8;

public:

	Fixed(void);
	Fixed(const int int_value);
	Fixed(const float float_value);
	Fixed(const Fixed &other);
	Fixed	&operator=(const Fixed &other);
	~Fixed(void);

	void	setRawBits(int const raw);
	int	getRawBits(void) const;
	int	toInt(void) const;
	float	toFloat(void) const;
	
	bool	operator>(const Fixed &other);
	bool	operator<(const Fixed &other);
	bool	operator>=(const Fixed &other);
	bool	operator<=(const Fixed &other);
	bool	operator==(const Fixed &other);
	bool	operator!=(const Fixed &other);

	Fixed	operator+(const Fixed &other);
	Fixed	operator-(const Fixed &other);
	Fixed	operator*(const Fixed &other);
	Fixed	operator/(const Fixed &other);

	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	static const	Fixed &min(Fixed &a, Fixed &b);
	static const	Fixed &min(const Fixed &a, const Fixed &b);
	static const	Fixed &max(Fixed &a, Fixed &b);
	static const	Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &object);

#endif