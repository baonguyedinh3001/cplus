#include <iostream>
#include <string>

// Define MathOperations namespace
namespace MathOperations {
    int add(int a, int b) {  // function: add to add a and b
        return a + b;
    }
}

// Define TextOperations namespace
namespace TextOperations {
    std::string concat(const std::string& str1, const std::string& str2) {  // concat to add 2 or more string to one
        return str1 + str2;  // const: to ensure the object not modify and to enhance efficiency
    }
}

int main() {
    // Using MathOperations namespace function
    int num1 = 5, num2 = 10;
    std::cout << "Sum: " << MathOperations::add(num1, num2) << std::endl;
    
    // Using TextOperations namespace function
    std::string text1 = "Hello, ", text2 = "World!";
    std::cout << "Concatenated String: " << TextOperations::concat(text1, text2) << std::endl;
    
    return 0;
}
