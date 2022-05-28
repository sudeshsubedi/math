#include "complex.hpp"

std::ostream& operator<<(std::ostream &out, const Complex& Z) {
    out << Z.real();
    if(Z.imaginary() >= 0 ) out << " + ";
    else out << ' ';
    out << Z.imaginary() << 'i';
    return out;
}


Complex& Complex::operator+=(const Complex& other) {
    re = re + other.real();
    im = im + other.imaginary();
    return *this;
}

Complex& Complex::operator-=(const Complex& other) {
    re = re - other.real();
    im = im - other.imaginary();
    return *this;
}

Complex operator+(Complex& left, Complex right) {
    double re = left.real() + right.real();
    double im = left.imaginary() + right.imaginary();

    Complex res(re, im);
    return res;
}

Complex operator-(Complex& left, Complex right) {
    double re = left.real() - right.real();
    double im = left.imaginary() - right.imaginary();

    Complex res(re, im);
    return res;
}