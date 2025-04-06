#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
void user_plus_input(int a, float b){
    
    std::cout<< a + b;
    
}
void user_minus_input(int a, float b){
   
    std::cout<< a - b;
}
void user_times_input(int a, float b){
    
    std::cout<< a * b;
}
void user_devide_input(int a, float b){
   
    if (b != 0) {  
        std::cout << "Quotient: " << a / b << std::endl;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
    }
}  

    

int main(){
    int choice;
    int a;
    float b;
  
  
    
    std::cout<<" 1 for enter + "<<std::endl;
    std::cout<<" 2 for enter - "<<std::endl;
    std::cout<<" 3 for enter  / "<<std::endl;
    std::cout<<" 4 for enter  * "<<std::endl;
    std::cin>>choice;
    std::cout<< "enter a: "<<std::endl;
    std::cin >> a;
    std::cout<< "enter b: "<<std::endl;
    std::cin >> b;
    switch(choice){
        case 1:  user_plus_input(a,b);
       
        break;
        case 2 :user_minus_input(a,b);
        break;
        case 3 :  user_devide_input(a,b);
        break;
        case 4 : user_times_input(a,b);
        
        
        break;
        default: std::cout<<"invalid choice";
    }
    return 0;

    
}