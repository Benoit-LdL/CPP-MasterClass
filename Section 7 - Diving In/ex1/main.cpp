#include <iostream>
#include <string>

int main(){
    std::string name;
    int age;

    std::cout << "Hi, please tell me your name: ";
    getline(std::cin, name);
    std::cout << std::endl << "Tell me your age: ";
    std::cin >> age;

    std::cout << "so your name is " << name << " and you are " << age << " years old." << std::endl;

    
    
    
    return 0;
}