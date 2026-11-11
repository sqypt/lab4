#include <iostream>
#include <string>

int main() {
    // Запрашиваем имя у пользователя
    std::string name;
    std::cout << "Enter your name (main): ";
    std::cin >> name;
    // Выводим приветствие
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
    // Это изменение из главной ветки main
}
