#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
using namespace std;
class car {
    private :
        string model_name;
        int year;
        double price;
    public :
    car(string t="" , int y=0 , double p=0): model_name(t), year(y), price(p){
        //cout<<" Constructor: "<< model_name<<"("<< year <<")"<<"---"<<"$"<<price<<endl;
        
    }
    ~car(){
        cout<<" car "<< model_name<< " is detroyed "<< endl;
    }

    void display() const {
        cout<<" car information: " << endl;
        cout<<" model_name: "<< model_name<<",";
        cout<<" year: "<<year<<"," ;
        cout<<" price: $"<< price <<endl;

    }
    void display1()  {
        cout<< "enter car model: " <<endl;
        cin>> model_name;
        cin.ignore();
        cout<< " enter year: " <<endl;
        cin>>year;
        cout<< " enter price: " <<endl;
        cin>> price;
        cout<<" Constructor: "<< model_name<<"("<<year<<")"<<"---"<<"$"<<price<<endl;

    }


};
class car_collection{
    private:
        car* collection;
        int size ;
    public:
        car_collection(){
            
            cout<<" how many cars would u like to create: "<<endl;
            cin>> size ;
            collection = new car[size];
             for( int i = 0; i< size;i++){
                
                collection[i].display1();
               
             
             }
             
             
             cout<<" car collection initialized with :"<< size << "cars"<< endl;
            
        }
        ~car_collection(){
            for( int i = 0; i < size; i++){}
                
            delete[] collection;
            cout<<"car collection is detroyed"<<endl;
        }
        void display() const{
            cout<<"\n--- car collection---"<<endl;
            for(int i= 0; i< size; i++){
                collection[i].display();
            }

        }
       


};
int main(){
  
    car_collection* coll = new car_collection();
    
    
    coll->display();

   
    
    
    delete coll;
    cout<< "\n---end of programm---\n";
    return 0;
}