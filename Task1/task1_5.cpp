#include <iostream>
int main()
{
int number;
std::cout <<"enter the number: "; 
std::cin>> number;// user input number
int sum = 0, remainder;
for (; number != 0 ;  )//as long as the number != 0 the loop will continue to add the digit of number
{
    remainder = number % 10; // modulo 10 in order to separate the last digit of number
    sum = sum + remainder;// sum of digit = last sum plus the number has been separated from number( digit)
    number = number / 10;// devide number to 10 in order to take the remainded number after modulo 10 

}
std::cout<<sum;
return 0;
}


