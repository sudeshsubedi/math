#pragma once

#include <iostream>

class Complex
{
public:
    Complex(double re, double im) : re(re), im(im) {}
    Complex() : re(0), im(0) {}
    double real() const { return re; }
    double imaginary() const { return im; }
    Complex& operator+=(const Complex& other);
    Complex& operator-=(const Complex& other);
    Complex& operator*=(const Complex& other);
    Complex& operator/=(const Complex& other);
    ~Complex() {}
private:
    double re, im;
};

std::ostream& operator<<(std::ostream &out, const Complex& Z);

Complex operator+(Complex& left, Complex right);
Complex operator-(Complex& left, Complex right);