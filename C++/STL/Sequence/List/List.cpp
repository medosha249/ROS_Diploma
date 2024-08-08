#include <iostream>
#include <list> //Doubly LinkedList

int main()
{
    std::list<int> l = {2, 3, 4, 6, 7, 8, 9, 10, 1, 5};
    l.sort(); // Sort the list

    for (auto it = l.cbegin(); it != l.cend(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << *l.crbegin() << std::endl; // Points at the last element
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


Type: Doubly Linked List
Bidirectional Iteration: Supports bidirectional iterators, allowing traversal in both forward and backward directions.
Node Structure: Each node contains pointers to both the next and the previous node.
Memory Overhead: Higher memory overhead due to the additional backward pointer in each node.
Operations: Supports efficient insertion and deletion of elements at both the beginning, end, and middle of the list.
Performance: Generally has better performance for operations that require frequent insertion and deletion in the middle of the list.
Methods: Provides a richer set of member functions compared to std::forward_list, such as push_back, pop_back, insert, erase, splice, and more.



*/