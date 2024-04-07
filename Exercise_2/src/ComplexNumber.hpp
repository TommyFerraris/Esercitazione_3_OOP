
#ifndef __COMPLEXNUMBER_H // Header guards
#define __COMPLEXNUMBER_H

#include <iostream>
#include <cmath>

using namespace std;

// Insert all your functions related to Complex class (both .cpp and .hpp) in a namespace to avoid clashes:
namespace ComplexLibrary{

struct ComplexNumber
{
    double real;
    double imag;

    ComplexNumber() = default;
    ComplexNumber(double a, double b)
    {
        real = a;
        imag = b;
    }
};


ostream& operator<<(ostream& os, const ComplexNumber &c);

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2);

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2);

void Coniugate(const ComplexNumber &c);


}
#endif
