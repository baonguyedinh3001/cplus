#include <iostream>
#include <string>
#include <cctype>
#define min_length 8 // password at least 8 character
void checkpasswordStrength(const std::string &password){ // function pasword checking
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    std::string specialCharacters = "!@#$%^&*";

    //check strenth
 if (password.length() < min_length)
 {
    std::cout << "Weak Password: Must be at least " << min_length << " characters long." << std::endl;
        //return;
 }
  // Check character types
  for (char ch : password) {// check each character in string
    if (isupper(ch)) hasUpper = true; // isuper() checking if upper character in string
    else if (islower(ch)) hasLower = true;// islower() checking if lower character in string
    else if (isdigit(ch)) hasDigit = true; // isdigit() checking if any digit in string
    else if (specialCharacters.find(ch) != std::string::npos) hasSpecial = true;// find()  checking if any special character in string
   //std:.string::npos : using to check if the search is sucessful
}

// Determine password strength
if (hasUpper && hasLower && hasDigit && hasSpecial) {
    std::cout << "Strong Password" << std::endl;
} else {
    std::cout << "Weak Password: Missing - ";
    if (!hasUpper) std::cout << "Uppercase Letter, ";
    if (!hasLower) std::cout << "Lowercase Letter, ";
    if (!hasDigit) std::cout << "Digit, ";
    if (!hasSpecial) std::cout << "Special Character";
    std::cout << std::endl;
}
}




int main() {
    
    std::cout<<" the passwor should contain at least: "<<std::endl;
    std::cout<<" One uppercase letter"<<std::endl;
    std::cout<<" One lowercase letter"<<std::endl;
    std::cout<<" One digit"<<std::endl;
    std::cout<<" One special character (e.g., !@#$%^&*)"<<std::endl;
    
    

    std::string password;
    std::cout << "Enter a password: ";
    std::cin >> password;
    
    checkpasswordStrength(password);
    

    return 0;

}