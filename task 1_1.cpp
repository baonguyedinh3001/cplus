#include <iostream>
#include <string>

// Define MathOperations namespace
namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
}

// Define TextOperations namespace
namespace TextOperations {
    std::string concat(const std::string& str1, const std::string& str2) {
        return str1 + str2;
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
