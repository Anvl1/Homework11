#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");

    std::string secretWord = "малина";
    std::string userGuess;
    do
    {
        std::cout << "Угадайте слово: ";
        std::getline(std::cin, userGuess);
        if (userGuess != secretWord)
        {
            std::cout << "Неправильно" << std::endl;
        }
    } while (userGuess != secretWord);

    std::cout << "Правильно! Вы победили! Загаданное слово — " << secretWord << std::endl;

    return 0;
}