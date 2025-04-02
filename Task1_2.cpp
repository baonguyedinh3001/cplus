#include <iostream>
#include <string>
#include <algorithm>

int countVowels(const std::string& str) {    // function for counting vowel
    int count = 0;
    std::string vowels = "AEIOUaeiou"; // declare how many vowels
    for (char ch : str) {  // ch will take the character in str one by one
        if (vowels.find(ch) != std::string::npos) { // find(ch): find the vowel in ch
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    
    // Take input from user
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);// getline read also space in string
    
  
   
    

   
    
    // Convert to uppercase
    std::string upperStr = input;
    std::transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);// transform: convert all character in ch to uppercase(input)
    std::cout << "Uppercase: " << upperStr << std::endl;// Transform(begin the range in ch, end of range,the transformed character will rewrite at the beginning agian, convert character to uppercase)
    
    // Count vowels
    int vowelCount = countVowels(input);
    std::cout << "Number of vowels: " << vowelCount << std::endl;
    
    // Reverse the string
    std::string reversedStr = input;
    std::reverse(reversedStr.begin(), reversedStr.end()); // reverser( character begins, character ends to reverse the string)
    std::cout << "Reversed string: " << reversedStr << std::endl;
    
    return 0;
}
