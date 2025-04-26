#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
using namespace std;
class complex{
    private : 
        double real;
        double imag;
    public:
        complex(double r, double i){
            real = r;
            imag = i;
        }

        friend complex operator+(const complex& number1, const complex& number2);
        friend complex operator-(const complex& number1, const complex& number2);
        friend complex operator/(const complex& number1, const complex& number2);
        friend ostream& operator<<(ostream& os, const complex& number);
       

        
};
complex operator+(const complex& number1, const complex& number2){
        return complex(number1.real + number2.real, number1.imag + number2.imag);
}
complex operator-(const complex& number1, const complex& number2){
        return complex(number1.real - number2.real, number1.imag - number2.imag);
}
complex operator/(const complex& number1, const complex& number2) {
    double denominator = number2.real * number2.real + number2.imag * number2.imag;
    double realPart = (number1.real * number2.real + number1.imag * number2.imag) / denominator;
    double imagPart = (number1.imag * number2.real - number1.real * number2.imag) / denominator;
    return complex(realPart, imagPart);}
ostream& operator<<(ostream& os, const complex& number) {
        os << number.real << " + " << number.imag << "i";
        return os;
    }

int main(){
    complex c1(4, 5), c2(2, -3);
    complex c3 = c1 + c2;
    complex c4 = c1 - c2;
    complex c5 = c1/c2;
    cout<< "c1: "<< c1 <<endl;
    cout << "c2 = " << c2 << endl;
    cout << "Sum = " << c3 << endl;
    cout << "Difference = " << c4 << endl;
    cout << "division: "<< c5 <<endl;
    return 0;
}
