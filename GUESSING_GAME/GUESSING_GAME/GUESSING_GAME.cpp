#include <iostream>
#include <cstdlib>

int main(){
    bool playing = true;
    while (playing == true) {
        bool correct = false;
        int guess;
        std::cout << "Guessing Game\n\n";
        char number = rand() % 101;
        while (correct == false) {
            std::cout << "Guess the number between 0 to 100: ";
            std::cin >> guess;
            if (guess > 0 && guess < 101) {
                if (guess > number) {
                    std::cout << "\n\nGuess Lower\n\n";
                }
                else if (guess < number) {
                    std::cout << "\n\nGuess Higher\n\n";
                }
                else {
                    std::cout << "\n\nYou Win!!\n\n";
                    correct = true;
                    std::cout << "Play Again (y/n): ";
                    char play;
                    std::cin >> play;
                    if (play == 'y') {
                        std::cout << "\n";
                    }
                    else {
                        playing = false;
                    }
                }
            }
            else {
                std::cout << "\n\nPlease Guess a number between 0 and 100\n\n";
            }
        }
    }
}