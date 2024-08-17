#include <iostream>
#include <set> //For managing Multiple copies and you cannot repeat the element

int main()
{
    std::set<std::string> bookTitles;

    bookTitles.insert("The Great Gatsby");
    bookTitles.insert("Moby Dick");
    bookTitles.insert("Pride and Prejudice");

    std::cout << "Book Titles in the Library (Sorted Alphabetically):\n";
    for (const auto &title : bookTitles)
    {
        std::cout << title << "\n";
    }

    return 0;
}
