#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    float realPart;
    float imaginaryPart;

public:
    ComplexNumber() // zero arguement constructor
    {
        realPart = 0.0;
        imaginaryPart = 0.0;
    }
    ComplexNumber(float real, float imaginary) // paramaterized constructor
    {
        realPart = real;
        imaginaryPart = imaginary;
    }
    // member function to output complex number
    void displayComplexNumber()
    {
        // cout << setiosflags(ios::showpoint)
            //  << setprecision(2) << endl
            //  << realPart << "+j" << imaginaryPart << endl;
    }
};
ComplexNumber numbers[5] = {
    ComplexNumber(0, 0),
    ComplexNumber(1, 1),
    ComplexNumber(2, 2),
    ComplexNumber(3, 3),
    ComplexNumber(5, 5)};
int main()
{

    return 1;
}
