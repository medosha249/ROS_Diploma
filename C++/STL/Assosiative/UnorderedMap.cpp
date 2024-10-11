#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, float> um;
    {
        um.insert({"Mohammed", 3.2});
        um.insert({"Salwa", 3.4});
        um.insert({"Marwa", 2.5});
        um.insert({"Marwan", 1.2});
        um.insert({"Mahmoud", 3.2});

        std::string name;
        std::cin >> name;
        int count = 0;

        auto it = um.begin();
        for (it; it != um.end(); it++)
        {
            if (it->first == name)
            {
                std::cout << "Your Grade IS: " << it->second << std::endl;
                count++;
                break;
            }
        }
        if (count == 0)
        {
            std::cout << "This name cannot be found in our system!" << std::endl;
        }
    }
}