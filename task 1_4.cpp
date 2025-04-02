#include <iostream>
#include <string>
#define sqaure(x) x*x// define the function square 
int main()
{
    int number;
    std::cout <<"enter the number: ";
    std::cin >> number; // user integer input
    std::cout<< "square of x = "<<sqaure(number) << std::endl;// return to macro sqaure(x)

    
return 0;
}