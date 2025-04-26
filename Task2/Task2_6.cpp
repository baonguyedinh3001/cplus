#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
#include <vector>// as array but can add and remove the element in array

struct student {
    char name[50] ;
    int  id;
    unsigned grade;
};
// function add student
void  addStudent(std::vector<student>& add_student){
    student new_student;
    std::cout << "Enter student name: ";
    std::cin>>new_student.name;

    std::cout << "Enter student ID: ";
    std::cin >> new_student.id;

    std::cout << "Enter student grade: ";
    std::cin >> new_student.grade;

    add_student.push_back(new_student); // Add student to the vector; add_student is variable,.push_back: code;(new_student: student want to add to the list)
    std::cout << "Student added successfully!"<<std::endl;
    

}
// Function to display all students
void displayStudents(const std::vector<student>& display_student) {
    if (display_student.empty()){
        std::cout<<" no student recorded"<<std::endl;return;}
        std::cout << "Student Records: "<<std::endl;
    for (const auto& new_student : display_student) {  // auto use for loop im vector with defaut auto element(an element in containner) : container
            std::cout << "ID: " << new_student.id << ", Name: " << new_student.name << ", Grade: " << new_student.grade << std::endl;
            }
        
    
}



// Function to search for a student by ID
void searchStudent(const std::vector<student>& search_student) {
    int student_Id;
    std::cout << "Enter student ID to search: ";
    std::cin >> student_Id;
   
    bool found =false;
    for (const auto& new_student : search_student) { // Loop through students
        if (new_student.id == student_Id) { // If ID matches
            std::cout << "Student Found: "<<std::endl;
            std::cout << "ID: " << new_student.id << ", Name: " << new_student.name << ", Grade: " << new_student.grade << std::endl;
            found = true;
            break; // Exit function after finding
        }
        
    }
 if (!found){
    std::cout << "Student not found."<<std::endl;} // If no match is found
}

int main() {
    std::vector<student> student_needed; // Dynamic list of students
    int choice;
    std::string start_programm;
    std::cout<< " yes for starting and no for exit: "<<std::endl;
    std::cin>> start_programm;
    while (start_programm != "yes" && start_programm != "no") // Keep showing the menu until user exits
    {  std::cout << "Invalid input! Enter 'yes' to start or 'no' to exit: ";
       std::cin >> start_programm;
    }

        if (start_programm == "yes")
        {
            while (true){
        std::cout << std::endl<<" Student Management System"<<std::endl;
        std::cout << "1. Add Student"<<std::endl;
        std::cout << "2. Display All Students"<<std::endl;
        std::cout << "3. Search Student by ID"<<std::endl;
        std::cout << "4. Exit"<<std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) { // Handle user choices
            case 1: addStudent(student_needed); break;
            case 2: displayStudents(student_needed); break;
            case 3: searchStudent(student_needed); break;
            case 4: 
                std::cout << "Exiting program. Goodbye!\n";
                return 0; // Exit the program
            default: 
                std::cout << "Invalid choice. Please try again.\n";
                std::cout<< " yes for starting and no for exit: "<<std::endl;
                 std::cin>> start_programm;
        }
    }
}
        else if( start_programm == "no"){
            std::cout<<"programm ended";
        }
    
    
        
    
    
    return 0;
}

