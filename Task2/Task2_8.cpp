#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
#include <vector>// as array but can add and remove the element in array
int main(){
    int a = 100; 
    int& refA = a;  // Reference to a 
    std::cout<<" refA "<< a ;
    refA = 30;  // Modifying refA modifies a 
    std::cout<<" refA "<< a ;
           // What happens to variable a when you change refA : the value of a will change to refA because a and refA has the same name

           return 0;
}
