#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
class student {
    private :
         std::string name;
         int age;
        char grade;
        std::string group;
    public :
        void set_name(std::string n){
            name = n;
            
        }
        void set_age(int a)
        {
            age = a;
        }
        void set_grade(char g){
            grade = g;
        }
        void getter_display_infor(){
            std::cout<< "name of student: "<< name <<std::endl;
            std::cout<< "age of student: "<< age <<std::endl;
            std::cout<< "grade of student: "<< grade <<std::endl;
        }
        void getter_name(){
            std::cout<<" name of student: "<< name<<std::endl;

        }
        void getter_age(){
            std::cout<<" age of student: "<< age<<std::endl;
        }
        void getter_grade(){
            std::cout<<" grade of student: "<< grade <<std::endl;
        }
};
int main(){
    student s;
    s.set_name("Claudius");
    s.set_age(42);
    s.set_grade(1);
    s.getter_display_infor();
    return 0;
}