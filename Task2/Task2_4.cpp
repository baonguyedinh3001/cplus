#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
void user_input_number(){
    int a;
    
   
    while(true){
        
        std::cout<<" please enter a random number: "   ;
        std::cin>>a; 
        if (a == 0){
            
            std::cout<<"zero enter, skipp processcing"<<std::endl;
          
            continue;
            
        }
        else if (a < 0){
          break;
        }
        else{
            std::cout<<"square of number you enter: "<< a * a<<std::endl;    
           
        
        }
        
        
    }

}


int main(){
    
    user_input_number ();
   
    return 0;
}