#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
class car {
    private : 
        std::string* brand;
        int year;
    public :    
     car (std::string b, int y){// constructor
        brand = &b;
        year = y;
     
    }   
    ~car(){// destructor
        delete brand;
    }
    void car_display(){
        std::cout<<" car infomation : "<<std::endl;
        std::cout<<" car brand: "<< *brand <<std::endl;
        std::cout<< " car year: "<< year <<std::endl;
    }
};
int main(){

    car* c1= new car( "volkwagen", 2024 );
    c1->car_display(); // call function of constructor
    delete c1; // call the function of destructor
    c1->car_display();
    
    return 0;
}