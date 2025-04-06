#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
#include <vector>// as array but can add and remove the element in array
int main(){
    int x = 100; 
int* p1 = &x;  // Pointer 1 points to x 
int* p2 = p1;  // Pointer 2 copies address (shallow copy) 
std::cout<<"x = "<< *p1 <<std::endl;
std::cout<<"x = "<< *p2 <<std::endl;
*p1= 200;
std::cout<<"x = "<< *p1 <<std::endl;
std::cout<<"x = "<< *p2 <<std::endl;
return 0;

}