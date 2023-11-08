
#pragma once 

#include <iostream>
#include <cmath> // to install this library in linux  sudo apt-get install libcmath-dev

class Fixed
{
private:
    int value;
    static const int fractionalBits = 8;
public:
    Fixed();
    Fixed(const int intValue);
    Fixed(const float floatValue);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    
    ~Fixed();

    float toFloat() const;
    int toInt() const;

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

Fixed::Fixed()
{
}

Fixed::~Fixed()
{
}
