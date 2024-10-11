#include <iostream>
#include <deque>
#include <algorithm>

int main()
{
    std::deque<int> d = {1, 3, 5, 7, 8, 10, 2, 9, 4, 6};
    auto it = d.cbegin();
    std::sort(d.begin(), d.end());
    for (it; it != d.cend(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    d.resize(15);
    it = d.cbegin();
    d.push_front(11);
    d.push_front(13);
    d.push_front(14);
    d.push_front(12);
    d.insert(it, 15);
    std::sort(d.begin(), d.end());
    for (it; it != d.cend(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    d.clear();
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