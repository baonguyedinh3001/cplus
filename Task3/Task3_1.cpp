#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
class book {
    private :
        std::string title;
        int page;
        std::string Author="Peter";
    protected: 
        float price;
    public :
        std::string publisher;
        void author_function(){
            std::cout<<" Author_info: "<< title << ", page: "  << page<< ", Name: " << Author; 
    }

};
int main(){
    book b;
    //b.title = " hello ";
    //std::cout<<" title of the book: "<< title;
    b.publisher = "Yamaha";
    std::cout<<" value of publisher: "<< b.publisher<<std::endl;
  
    b.author_function();
 
 return 0;

}