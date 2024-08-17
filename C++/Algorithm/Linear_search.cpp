#include <iostream>

auto linear_search(int arr[], int n, int element)
{
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int num;
    std::cout << "Enter number you want to search:";
    std::cin >> num;
    int arr[] = {5, 4, 3, 7, 9, 32, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linear_search(arr, n, num);
    if (result == -1)
    {
        std::cout << "The element was not found!" << std::endl;
    }
    else
    {
        std::cout << "The element " << arr[result] << " was found at index " << result << std::endl;
    }
}