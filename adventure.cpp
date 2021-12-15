#include <iostream>

int main() {
    std::cout << "Welcome to the game...\n\n";

    char answer;
    char choice;

    while (char != "Y") {
        std::cout << "What do you desire?\n\n";
        std::cout << "Wisdom\n";
        std::cout << "Vitality\n";
        std::cout << "Balance\n";
        std::cin >> choice;
        std::cout << "are you sure?\nY or N\n";
    }
}