#include <iostream>
#include <cmath>
#include <string>
#include <utility> // For std::swap
using namespace std;
int main(){
    int age;
    string name;
    cout<<" enter your age: ";
    cin>> age;
    cin.ignore();
    cout<<" Enter your full name: ";
    getline(cin,name);
    cout<<"Age: "<< age <<",name: "<< name<< endl;
    return 0;
}