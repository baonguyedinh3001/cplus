#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
using namespace std;
class Book{
    private : 
    string title;
    int pages;
    public :
        // constructor
        Book(string t = "Untitled", int p = 0): title(t), pages(p){
        cout<<"Constructor: \""<< title <<"\" with " << pages << " pages\n";
        }
        
       void clear(){

             
             
             cout << "Destructor: \""<< title <<"\" destroyed\n";

           }
        
        friend ostream& operator<<(ostream& os, const Book& b);
           
        
};
 ostream& operator<<(ostream& os, const Book& b){
    os << "Title: \""<< b.title <<"\" , " << b.pages << " pages\n";
    return os;}
    


int main(){
    Book library[3]={
        Book("C++ Fundamentals", 300),
        Book("Data Structures", 450),
        Book("Algorirgms", 500),
    };
    //cout<< library[0]<< endl; 
    //cout<< library[1]<< endl;
    //cout<< library[2]<< endl;
    cout << "\n---Library Contents---\n";
    for( int i = 0;i<3;i++ ){
        cout<< library[i];
    }
    cout<< "\n---end of programm---\n";
    library[2].clear();
    library[1].clear();
    library[0].clear();
    return 0;

}
