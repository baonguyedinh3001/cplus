#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
class vehicle {
    protected: 
        std::string brand;
        int year;
    public:
        vehicle ( std::string b, int y){
            brand = b;
            year = y;
        }
    ~vehicle(){
         std::cout<<" vehicle is deleted"<<std::endl;
    }
     
    void vehicle_info(){
        std::cout<<" vehicle infos: "<<std::endl;
        std::cout<<" brand: "<< brand<<std::endl;
        std::cout<<" year: "<< year<<std::endl;

    }   
    void start_engine(){
        std::cout<<" starting engine of vehicle";
    } 
    

    
};  
class car : public vehicle{
    private :
    int numdoor;
    public :
     car  (std::string b, int y, int n) : vehicle ( b,y){
         
          numdoor = n;
        
     }
     int get_numdoor(){

        return numdoor;   } 
    void vehicle_info(){
        std::cout<<" vehicle infos: "<<std::endl;
        std::cout<<" brand: "<< brand<<std::endl;
        std::cout<<" year: "<< year<<std::endl;
        std::cout<<" num door"<< numdoor<<std::endl;
    }
    void start_engine(){
        std::cout<<" Car engine is starting! "<<std::endl;
    } 
    ~car(){
        std::cout<<" car is deleted"<<std::endl;
    }

};
class  ElectricCar : public car{
        private: 
            int batteryCapacity; // battery size in kWh
        public :
            ElectricCar(): car ("", 0, 0) { // default constructor with default value of class: car string "",0,0; because of 3 variable in class car
                batteryCapacity = 0;}
                
            ElectricCar(std::string b, int y, int n, int battery) : car (b,y,n)   {// Parameterized constructor takes all value from class car
                 batteryCapacity = battery;
            }
        void vehicle_info()   {
            std::cout<<" vehicle infos: "<<std::endl;
            std::cout<<" brand: "<< brand<<std::endl;
            std::cout<<" year: "<< year<<std::endl;
            std::cout<<" numdoor: "<< get_numdoor()<<std::endl;
            std::cout<<" battery capacity: "<< batteryCapacity <<" kwh "<<std::endl;
        } 
        void start_engine(){
            std::cout<<"Electric engine is starting... Silent but powerful!"<<std::endl;
        }
    ~ElectricCar(){
        std::cout<<" Electric car is deleted"<<std::endl;
    }

};
int main(){
    vehicle* v1= new vehicle("Volkwagen", 2024);
    v1-> vehicle_info();// call function in "new"
    v1-> start_engine();
    car* c1= new car("Volkwagen", 2024 , 4 );
    c1-> vehicle_info();
    c1-> start_engine();
    ElectricCar* e1 = new ElectricCar; // for default constructor no value needed
    e1-> vehicle_info();
    e1-> start_engine();
    ElectricCar* e2 = new ElectricCar("Volkwagen", 2024, 4, 50);
    e2-> vehicle_info();
    e2-> start_engine();
    ElectricCar* eCar = new ElectricCar("Nissan", 2022, 4, 40); 
    eCar->vehicle_info(); 
    eCar->start_engine(); 
delete eCar;
    delete v1;
    delete e1;
    delete e2;
    delete c1;
    

    return 0;
}