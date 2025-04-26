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
        ~Book(){
            cout << "Destructor: \""<< title <<"\" destroyed\n";

        }
        void display() const {
            cout << "title:" << title <<", Pages: "<< pages <<endl;
        }
};
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
        ~BookShelf(){
            delete[] books;
            cout << "BookShelf Destructor: Shelf detroyed\n";
        }
        void displayBooks() const {
        cout << "\nBooks on shelf :\n";
        for (int i = 0; i< size; ++i){
            books[i].display();
        }
        };
};
int main(){
    Book library[3]={
        Book("C++ Fundamentals", 300),
        Book("Data Structures", 450),
        Book("Algorirgms", 500),
    };
    cout << "\n---Library Contents---\n";
    for( int i = 0;i<3;i++ ){
        library[i].display();
    }
    BookShelf* shelf = new BookShelf(); // create a heap
    shelf->displayBooks();
    delete shelf; // clean up
    cout<< "\n---end of programm---\n";
    return 0;

}
