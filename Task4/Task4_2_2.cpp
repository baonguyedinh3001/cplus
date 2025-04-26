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
            cout <<"Constructor: \""<< title <<"\" with " << pages << " pages\n";

        }
        // Destructor
       
        void clear(){
           
            
            cout << "Destructor : \""<< title <<"\" destroyed\n";

        }
        friend ostream& operator<<(ostream& os, const Book& b);
        
};
ostream& operator<<(ostream& os, const Book& b){
    os << "Title : \""<< b.title <<"\" , " << " pages: "<< b.pages <<"\n";
    return os;}
class BookShelf {
    private: 
        Book* books;// pointer to Book array;
        int size;
    public: 
        //Constructor: dynamically create array and intialize it
        BookShelf(){
            size = 3;
            books = new Book[size]{
                Book("C++ Fundamentals", 300),
                Book("data Structures", 450),
                Book("Algorithms", 500)
            };
            cout <<"BookShelf Constructor: Shelf initialized with" << size << "books\n";


        }
        ~BookShelf() {
            delete[] books;
            for (int i = 0; i < size; i ++){
                books[i].clear();
            }
            cout<<" Bookshelf destructor: Schelf detroyed ";
        }
       
        friend ostream& operator<<(ostream& os, const BookShelf& bs);
       
        
};
 
 ostream& operator<<(ostream& os, const BookShelf& bs){
        cout << "\nBooks on shelf :\n";
        for (int i = 0; i< bs.size; ++i){
              os << bs.books[i] << "\n" ;
        }
        

        
        return os;
}
int main(){
   
    BookShelf* shelf = new BookShelf(); // create a heap
    
    cout << *shelf;
    
  
    delete shelf;



    // clean up
    cout<< "\n---end of programm---\n";
    return 0;

}
