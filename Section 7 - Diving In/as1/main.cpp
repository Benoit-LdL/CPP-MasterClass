#include <iostream>
#include <string>

int main(){
    
    std::string country;
    std::string name;

    std::cout << "Hi, what's your name? ";
    getline(std::cin,name);

    std::cout << "Hi " << name << ", which country do you live in? ";
    std::cin >> country;

    std::cout << name << ", I've hear great things about " << country << ". I'd like to go sometime.";   
    return 0;
}