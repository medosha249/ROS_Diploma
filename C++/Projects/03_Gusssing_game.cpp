#include <iostream>
#include <cstdlib>
#include <ctime>

void Game(int &usrGuess, int &attempts)
{
    std::srand(std::time(0));

    int GuessedNumber = std::rand() % 10 + 1; // between 1 & 10
    if (usrGuess == GuessedNumber)
    {
        std::cout << "===============Congrats your are a WINNER================\n";
    }
    else
    {
        std::cout << "=====Wrong Guess!===== \n"
                  << "The Number is : " << GuessedNumber << std::endl;
    }
}
int main()
{
    while (true)
    {
        int UserGuess;
        int attempts = 5;
        std::cout << "-------------------------------Guessing Game ----------------------------------\n"
                  << "Please Guess a number between 1 and 10 \n"
                  << "You have " << attempts << " attempts\n";

        std::cout << "Enter Your Guess: ";
        std::cin >> UserGuess;
        Game(UserGuess, attempts);
        char choice;

        std::cout << "Do you want to Guess again (Y,N):  ";
        std::cin >> choice;
        if (choice != 'Y' && choice != 'y')
            break;
    }
}