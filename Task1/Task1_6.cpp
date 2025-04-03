#include <iostream>
int main() {
int number, remainder, re_number=0;
std::cout<<"enter the number: ";
std::cin>>number;
for (; number!= 0;){
remainder = number % 10;// extract the last number 
re_number= re_number*10 + remainder; //build the reverse number
number= number/10; //remove the last digit
}
std::cout<<" the reverse number is  :"<< re_number;
return 0;
}

