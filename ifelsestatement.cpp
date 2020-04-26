#include <iostream>

int main() {
    int user_age;

    std::cout << "How old are you? ";
    std::cin >> user_age;

    if (user_age >= 18) {
        std::cout << "Matured";
    } else {
        std::cout << "Immatured";
    }

    std::cout << std::endl;

    return 0;
}