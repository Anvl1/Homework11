#include <iostream>
#include <string>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");

    std::string firstName;
    std::string lastName;
    
    std::cout << "Введите имя: ";
    std::getline(std::cin, firstName);
    
    std::cout << "Введите фамилию: ";
    std::getline(std::cin, lastName);

    std::string result = firstName + " " + lastName;
    
    std::cout << "Здравствуйте, " + result + "!" << std::endl;

    return 0;
}