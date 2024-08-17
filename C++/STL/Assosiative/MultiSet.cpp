#include <iostream>
#include <set> // Allows Duplicate Elements

int main() {
    std::multiset<std::string> bookInventory;

    // Adding multiple copies of books
    bookInventory.insert("Moby Dick");
    bookInventory.insert("Moby Dick");
    bookInventory.insert("Pride and Prejudice");

    std::cout << "Books in Inventory (with counts):\n";
    for (const auto& title : bookInventory) {
        std::cout << title << "\n";
    }

    return 0;
}
