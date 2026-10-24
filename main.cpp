#include <iostream>
#include <vector>
#include "game.h"
#include "stats.h"


int main() {
    std::cout << "\n";
    std::cout << "Welcome to the Guess the Number game! \n";
    std::cout << "\n";

    char choice;
    std::vector<int> history;

    do {
        Game game;
        game.play();
        int attempts = game.n;
        history.push_back(attempts);
        addGameResult(attempts);
        std::cout << "\nTry again? (y/n): ";
        std::cin >> choice;

        if (choice == 'y') {
            continue;
        }
        if (choice == 'n') {
            break;
        }
    } while (true);

    showStats();

    std::cout << "\nThank you for playing! Goodbye\n";
    return 0;
}