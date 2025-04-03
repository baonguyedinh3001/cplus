#include <iostream>
#include <string>
using namespace std;
#define max 50 // using macro for 50

int main(){
    // loop to print even numbers from 1 to 50
    for (unsigned short i = 2 ; i <= max; i += 2){ // using unsigned short instead of int: because unsigned short is positive and 16 bits
        cout<< i << " ";
    }
    return 0;
}
