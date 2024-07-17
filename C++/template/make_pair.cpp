#include <iostream>
#include <vector>

template <typename T1, typename T2>
struct pair
{
    T1 first;
    T2 second;

    // Pair(T1 f, T2 s)
    //     : first(f), second(s)
    // {
    // }

    // void display()
    // {
    //     std::cout << first << " " << second << std::endl;
    // }
};
template <typename T3, typename T4>
pair<T3, T4> make_pair(T3 first, T4 second)
{
    pair<T3, T4> P;
    P.first = first;
    P.second = second;
    return P;
}

int main()
{
    std::vector<pair<int, std::string>> P;
    // std::vector<pair<int, std::string>>
    //     P = {
    //         {1, "Mohammed"},
    //         {2, "Omar"},
    //         {3, "Ahmed"},
    //         {4, "Marwan"}};
    P.push_back(make_pair<int, std::string>(1, "Mohammed"));
    // P.push_back({2, "Mohammed"});
    for (int i = 0; i < P.size(); i++)
    {
        std::cout << P[i].first << " " << P[i].second << std::endl;
    }
    // Pair<int, Pair<std::string, int>> P(1, {"Mohammed", 2});
    // std::cout << P.first << " " << P.second.first << " " << P.second.second << std::endl;
    // P.second.display();
    return 0;
}