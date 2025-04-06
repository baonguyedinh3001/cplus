#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
void user_input_number(int &a ){
    std::cout<<" please enter a random number: " << a <<std::endl;
    std::cin>>a; 
    for (int i = 1;a<500000;i++){
        if (a == 0){
            std::cout<<"zero enter, skipp processcing"<<std::endl;
            continue;
            std::cout<<" please enter a random number: " << a <<std::endl;
            std::cin>>a; 
        }
        else if (a < 0){
          break;
        }
        
        std::cout<<"square of number you enter: "<< a * a<<std::endl;    
         std::cout<<" please enter a number: "<<std::endl;
         std::cin>>a;   
        
    }

}

int main(){
    int  a;
    user_input_number (a);
   
    return 0;
}