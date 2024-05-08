#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(NULL)));

    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;

    // Initialize the guess
    int userGuess;
    bool guessed = false;

    std::cout << "Start the Number Guessing Challenge!" << std::endl;
    std::cout << "I have selected a random number between 1 and 100. Can you guess it?" << std::endl;

    while (!guessed) {
        std::cout << "Input your estimate: ";
        std::cin >> userGuess;

        if (userGuess < randomNumber) {
            std::cout << "Too low! Try guessing higher." << std::endl;
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try guessing lower." << std::endl;
        } else {
            std::cout << "Bravooo! You guessed the correct number, " << randomNumber << "!" << std::endl;
            guessed = true;
        }
    }

    std::cout << "Thank you for playing!" << std::endl;

    return 0;
}
