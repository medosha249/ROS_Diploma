#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {10, 7, 5, 3, 4, 2, 8, 9, 6, 1, 0};
    auto it = v.cbegin();
    std::sort(v.begin(), v.end());
    for (it; it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << v.size() << std::endl;
    std::cout << v.back() << std::endl;
    std::cout << v.front() << std::endl;
    std::cout << v.capacity() << std::endl;
    v.clear();
    v.push_back(10);
    v.push_back(1);
    v.push_back(0);
    v.push_back(6);
    v.push_back(9);
     it= v.end();
    v.emplace(it,3);
    v.emplace_back(6);
    v.insert(it,3);
    //std::sort(v.begin(), v.end());
    for (auto it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    // std::cout <<*v.cbegin()<< std::endl;
    // std::cout <<*v.cend()<< std::endl;
    return 0;
}

/*
Function	                        Type of Iterator    	                Direction	                                Modifiable
begin()	                                Iterator	                        Forward (first)	                                Yes
end()	                                Iterator	                        Forward (past-end)	                            Yes
cbegin()	                            Const Iterator	                    Forward (first)                                 No
cend()	                                Const Iterator	                    Forward (past-end)	                            No
rbegin()	                            Reverse Iterator	                Reverse (last)	                                Yes
rend()	                                Reverse Iterator	                Reverse (pre-first)	                            Yes
crbegin()	                            Const Reverse Iterator	            Reverse (last)	                                No
crend()	                                Const Reverse Iterator	            Reverse (pre-first)	                            No

*/