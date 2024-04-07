# include "ComplexNumber.hpp"

namespace ComplexLibrary{

ostream& operator<<(ostream& os, const ComplexNumber &c)
{
    if (c.imag < 0)
        os << c.real << "-" << -c.imag << "i";
    else
        os << c.real << "+" << c.imag << "i";
    return os;
}

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2)
{
    ComplexNumber c(c1.real + c2.real, c1.imag + c2.imag);
    return c;
}

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2)
{
    return (abs(c1.real - c2.real) < 1e-6 && abs(c1.imag - c2.imag) < 1e-6);
}

void Coniugate(const ComplexNumber &c) {
    cout << "Coniugate of ";
    if (c.imag < 0)
        cout << c.real << "-" << -c.imag << "i";
    else
        cout << c.real << "+" << c.imag << "i";
    cout << " is: ";
    if (c.imag < 0)
        cout << c.real << "+" << -c.imag << "i";
    else
        cout << c.real << "-" << c.imag << "i";
    cout << endl;
}
}


