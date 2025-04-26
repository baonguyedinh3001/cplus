#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
using namespace std;
class car {
    protected:
        string model;
        int year;
        float price;
    public:
        car(string m ="", int y=0, float p=0 ): model(m), year(y), price(p){
           
        }
        ~car(){
            cout<< " car model :  "<< model << " " "is detroyed" <<endl;;
        }   
   
    void inputBasic(){
        

        cout<< "enter car model: " ;
        cin>> model;
        
        cout<< " enter year: " ;
        cin>>year;
        cout<< " enter price: " ;
        cin>> price;
    }
     void displayBasic() const{
        cout<<" ---car information---: " <<endl;
        cout<<" model_name: "<< model << ","<<" year: "<< year <<" , " <<" price: $"<< price;
        
    }

};
class Electric_car: public car{
    protected :
        float battery_size;
        
     public:
        // Default Constructor
        Electric_car() : car("", 0, 0), battery_size(0) {}
        
        Electric_car(string m, int y, float p, float ba) : car (m,y,p){
                battery_size = ba;
                
                
        }
        ~Electric_car(){
            cout<<" Eletrctic car is detroyed"<< model << endl;
        }
        void input(){
            inputBasic();
            cout << "Enter battery size: ";
            cin >> battery_size;
        }
        void display() const  {
            displayBasic(); // Call base class method
            cout << ", Battery Size: " << battery_size << " kWh\n";}
   } ;
   class Gascar : public car{
    protected : 
        float fuelCapacity ;
    public :
        // default constructor
        Gascar():  car("",0,0), fuelCapacity(0){}
        Gascar(string m, int y, float p, float f) : car(m,y,p){
            fuelCapacity = f;
        }
    ~Gascar(){
        cout<<" Gascar is detroyed "<< model << endl;
    }
    void input(){
        inputBasic();
        cout<<" enter the fuel capacity: " ;
        cin>> fuelCapacity;
    }
    void display(){
        displayBasic(); // Call base class method
        cout<< " , fuel capacity: " << fuelCapacity <<" L "<<endl;
    }

   };

   class Hybridcar: public car{
        protected : 
            float batterySize , fuelCapacity;
        public :
        // default constructor
            Hybridcar() : car ("",0,0), batterySize(0), fuelCapacity(0) {}
            Hybridcar(string m, int y, float p, float ba1, float f1) : car(m,y,p){
                batterySize = ba1; fuelCapacity = f1;
            }
        ~Hybridcar(){
            cout<<" Hybrid car is detroyed: " << model << endl;
        }
        void input(){
            inputBasic();
            cout<< " enter the battery size: ";
            cin >> batterySize;
            cout<< " enter the fuel capaciy: ";
            cin>> fuelCapacity;
        }
        void display(){
            displayBasic(); // Call base class method
            cout << " , battery capacity: " << batterySize << " kWh " ;
            cout << " ,  fuel capacity: " << fuelCapacity << " L" <<endl;
        }
   };


   int main(){
    

    int n;
    cout << "Enter the number of cars: ";
    cin >> n;
    car** cars = new car*[n];// pointer to pointer to point out the derived class from car class otherwise pointer points only to car
    int* typecode = new int[n];
    for (int i = 0; i < n; ++i) {
        int type;
        cout << "\nSelect car type (1 = Electric, 2 = Gas, 3 = Hybrid): ";
        cin >> type;
        typecode[i] = type; // Store type code

        switch (type) {
            case 1:
                cars[i] = new Electric_car();
                static_cast<Electric_car*>(cars[i])->input();// car[i] points to Electric-car to accees to input, not basic input
                
                
                break;
            case 2:
                cars[i] = new Gascar();
                static_cast<Gascar*>(cars[i])->input();
                 break;
            case 3:
                cars[i] = new Hybridcar();
                static_cast<Hybridcar*>(cars[i])->input();
               
                break;
            default:
                cout << "Invalid type! Defaulting to Electric Car.\n";
                
               return 0;
                break;
        }
    }   
    for (int i = 0; i < n; ++i) {
        switch (typecode[i]) {
            case 1:
                static_cast<Electric_car*>(cars[i])->display();
                break;
            case 2:
                static_cast<Gascar*>(cars[i])->display();
                break;
            case 3:
                static_cast<Hybridcar*>(cars[i])->display();
                break;
            default:
                cout << "Unknown car type.\n";
                
                break;
        }
    }    
          
    
       
   
   


 // Free memory
 cout<<" --- clean up fleet ---"<< endl;
 for (int i = 0; i < n; ++i) {
    delete cars[i];
}
    delete[] cars;
   
    delete[] typecode;
   
   return 0;
}
        
                


   

        
      



