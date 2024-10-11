#include <iostream>
#include <cctype>

bool isStringValid(const std::string &str)
{
    for (char c : str)
    {
        if (!std::isalpha(c))
        {
            return false;
        }
    }
    return true;
}

void Game(const std::string &user1, const std::string &user2)
{
    if (user1 == "ROCK" && user2 == "SEIZER")
    {
        std::cout << "=====USER 1 is The winner=====" << std::endl;
    }

    if (user1 == "ROCK" && user2 == "PAPER")
    {
        std::cout << "=====USER 2 is The winner=====" << std::endl;
    }
    if (user1 == "PAPER" && user2 == "SEIZER")
    {
        std::cout << "=====USER 2 is The winner=====" << std::endl;
    }
    if (user1 == "PAPER" && user2 == "ROCK")
    {
        std::cout << "=====USER 1 is The winner=====" << std::endl;
    }
    if (user1 == "SEIZER" && user2 == "ROCK")
    {
        std::cout << "=====USER 2 is The winner=====" << std::endl;
    }
    if (user1 == "SEIZER" && user2 == "PAPER")
    {
        std::cout << "=====USER 1 is The winner=====" << std::endl;
    }
    if (user1 == "ROCK" && user2 == "ROCK")
    {
        std::cout << "==== NO ONE IS A WINNER! ====" << std::endl;
    }
    if (user1 == "PAPER" && user2 == "PAPER")
    {
        std::cout << "==== NO ONE IS A WINNER! ====" << std::endl;
    }
    if (user1 == "SEIZER" && user2 == "SEIZER")
    {
        std::cout << "==== NO ONE IS A WINNER! ====" << std::endl;
    }
}

int main()
{
    std::cout << "--------------------------------ROCK & PAPER & SEIZER --------------------------------" << std::endl
              << "Please Enter (ROCK , PAPER , SEIZER)" << std::endl;
    std::string usr1, usr2;
    while (true)
    {
        std::cout << "Enter User 1 Choice: ";
        std::cin >> usr1;

        for (auto &c : usr1)
            c = toupper(c);

        if (isStringValid(usr1) && (usr1 == "ROCK" || usr1 == "PAPER" || usr1 == "SEIZER"))
        {
            break;
        }
        else
        {
            std::cout << "Invalid input! Please enter only ROCK, PAPER, or SEIZER." << std::endl;
        }
    }

    while (true)
    {
        std::cout << "Enter User 2 Choice: ";
        std::cin >> usr2;

        for (auto &c : usr2)
            c = toupper(c);

        if (isStringValid(usr2) && (usr2 == "ROCK" || usr2 == "PAPER" || usr2 == "SEIZER"))
        {
            break;
        }
        else
        {
            std::cout << "Invalid input! Please enter only ROCK, PAPER, or SEIZER." << std::endl;
        }
    }
    Game(usr1, usr2);
}
