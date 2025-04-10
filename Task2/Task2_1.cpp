#include <iostream>
#include <cmath>
#include <string>

void multiply(int a, int b){
    std::cout<< "result a*b: "<<a*b<<std::endl;
}
void multiply(double a, double b){
    std::cout<< "result a*b: "<<a*b<<std::endl;
}
void multiply(int a,double b, bool flag = true){
if (flag){
    std::cout<<"result a*b: "<<std::ceil(a*b)<<std::endl; //ceil():roundup
    
}
    else{
     std::cout<<"result a*b: "<<std::floor(a*b)<<std::endl;
}
}







int main(){
    int a=5, b=6;
    double c=2.5, d=3.5;
    int e=2;
    double f= 2.1;

    bool flag=true;
    multiply(a,b);
    multiply(c,d);
    multiply(e,f,flag);
    multiply(e,f,flag=false);

    return 0;
}