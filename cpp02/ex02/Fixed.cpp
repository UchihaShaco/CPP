#include "Fixed.hpp"



Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int intValue)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = intValue << fractionalBits;
}


Fixed::Fixed(const float floatValue)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(floatValue * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = other.value;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->value = other.value;
    }
    return *this;
}



Fixed Fixed::operator+(const Fixed& other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++()
{
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed& Fixed::operator--()
{
    this->value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

bool Fixed::operator>(const Fixed& other) const
{
    return this->toFloat() > other.toFloat();
}

bool Fixed::operator<(const Fixed& other) const
{
    return this->toFloat() < other.toFloat();
}
// equals
bool Fixed::operator>=(const Fixed& other) const
{
    return this->toFloat() >= other.toFloat();
}

bool Fixed::operator<=(const Fixed& other) const
{
    return this->toFloat() <= other.toFloat();
}

bool Fixed::operator==(const Fixed& other) const
{
    return this->toFloat() == other.toFloat();
}

bool Fixed::operator!=(const Fixed& other) const
{
    return this->toFloat() != other.toFloat();
}

// min max

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if(a < b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    return b;
}

Fixed const& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;
    return b;
}

// 

Fixed::Fixed(const int intValue)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = intValue << fractionalBits;
}


Fixed::Fixed(const float floatValue)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(floatValue * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = other.value;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


float Fixed::toFloat() const
{
    return static_cast<float>(this->value) / (1 << fractionalBits);
}

int Fixed::toInt() const
{
    return this->value >> fractionalBits;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
