#include <iostream>
#include <forward_list> //Singly LinkedList
#include <algorithm>

int main()
{
    std::forward_list<int> fl;
    fl.push_front(3);
    fl.push_front(4);
    fl.push_front(2);
    fl.push_front(1);
    fl.push_front(5);
    fl.push_front(6);
    fl.pop_front();
    fl.sort();
    auto it = fl.cbegin();
    for (it; it != fl.cend(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*

Type: Singly Linked List
Unidirectional Iteration: Supports only forward iterators, allowing traversal only in the forward direction.
Node Structure: Each node contains a pointer to the next node only.
Memory Overhead: Lower memory overhead since there is only one pointer per node.
Operations: Efficient insertion and deletion of elements, but primarily at the beginning or end of the list. Insertions and deletions in the middle are less efficient compared to std::list.
Performance: Generally has better performance for operations that primarily involve the front of the list, due to the reduced memory overhead.
Methods: Provides a more limited set of member functions compared to std::list, such as push_front, pop_front, insert_after, erase_after, and more.

*/