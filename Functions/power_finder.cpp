#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int base, exponent, result, new_result;
    //Integers are numbers without decimals. 
    //Double is a floating-point numbers with double precisions.
    //int is used to store 32 bit two's complement integer while 
    //double is used to store 64 bit double precision floating point value.

    cout << "Enter Base and Exponent respectively:  ";

    cin >> base >> exponent;

    result = pow(base, exponent);

    cout << base << "^" << exponent << " = " << result << std::endl;

    new_result = pow(base, exponent) * 2;
    
    cout << base << "^" << exponent << "* 2" << " = " << new_result;

    return 0;

}