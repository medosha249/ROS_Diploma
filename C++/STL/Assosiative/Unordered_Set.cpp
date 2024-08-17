#include <iostream>
#include <unordered_set> // Requires an input for search

int main()
{
    std::unordered_set<std::string> availableBooks;

    availableBooks.insert("The Catcher in the Rye");
    availableBooks.insert("To Kill a Mockingbird");
    availableBooks.insert("1984");

    std::string searchTitle = "1984";

    if (availableBooks.find(searchTitle) != availableBooks.end())
    {
        std::cout << searchTitle << " is available in the library.\n";
    }
    else
    {
        std::cout << searchTitle << " is not available in the library.\n";
    }

    return 0;
}
