#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
int main(){
    int array[]={1,20,50,7,200};
    //int size = sizeof(array) / sizeof(array[0]); // sizeof(array): total bit of array
    //sizeof(array)/sizeofarray[0]: total elements in array
    int new_array[5];
    int* store_array = array + 4; // start at least element because array:pointer at first element , size total element, -1 move position backward
    std::cout << "array: ";
    for (int i = 4; i >=0; i--) {
        new_array[i] = *store_array;  // Copy value
        store_array--;  
        
        std::cout <<new_array[i]<< " " ;
    } // Move pointer backward
       
        

    return 0;
}
