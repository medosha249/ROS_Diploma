#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> m = {{1, "Mohammed"}, {2, "Ahmed"}, {3, "Omar"}};
    std::multimap<int, int> s = {{1, 2}, {3, 4}, {3, 4}};
    m[4] = "Belal";
    m[5] = "Kareem";
    m[6] = "Ibrahim";
    m.at(3) = "Marwa";
    auto print_result(m.insert_or_assign(4, "Mahmoud"));
    auto it = m.begin();
    auto it2 = s.begin();
    for (it; it != m.end(); it++)
    {
        std::cout << it->first << ": " << it->second << std::endl;
    }
    for (it2; it2 != s.end(); it2++)
    {
        std::cout << it2->first << ": " << it2->second << std::endl;
    }
}