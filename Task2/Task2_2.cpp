#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
void swap_value(float a, float b){
    float temp = a;
    a = b;
    b = temp;
    
    std::cout<<"swap value a and b is: "<< a <<" and "<<b<<std::endl;
}
void swap_value_pointer(float *a, float *b){
 
    std::swap(*a,*b);
 std::cout<<"swap value a and b is: "<< *a<< " and  "<<*b<<std::endl;
}
void swap_value_reference( float &a, float &b){
    
    std::swap(a,b);
    std::cout<<"swap value a and b is: "<<a<<" and "<< b <<std::endl;
 }

int main(){
    float a = 2.0, b= 5.0; 
    float num = 4.8; float *c=&num;
    float num1 = 5.8; float *d=&num1;
    float num2 = 6.2; float &e= num2;
    float num3 =10.0; float &f = num3;
    swap_value(a,b);
    swap_value_pointer(c,d);
    swap_value_reference(e,f);
    return 0;
}