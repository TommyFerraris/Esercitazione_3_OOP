#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ComplexLibrary::ComplexNumber c(4, -2);
    cout << "exemple of complex number: " << c << endl;


    ComplexLibrary::ComplexNumber c1(1, 2);
    ComplexLibrary::ComplexNumber c2(1, -4);
    ComplexLibrary::ComplexNumber c3(1, -4);
    cout << "complex number c1: " << c1 << endl;
    cout << "complex number c2: " << c2 << endl;
    cout << "complex number c3: " << c3 << endl;

    ComplexLibrary::ComplexNumber sum = c1 + c2;
    cout << "complex sum (c1+c2): " << sum << endl;

    // print true if the two number are equal and false if they are not equal
    cout << boolalpha << "the number are equal: (c1 == c2): " << (c1 == c2) << endl;    //should print false
    cout << boolalpha << "the number are equal: (c2 == c3): " << (c2 == c3) << endl;    //should print true

    //function that prints the coniugate of the complex number c
    Coniugate(c);

    return 0;
}
