#include <iostream>
#include <algorithm>
auto binary_search(int arr[], int l, int h, int element)
{
    while (l <= h)
    {
        int m = (l + h) / 2;

        if (arr[m] == element)
        {
            return m;
        }
        else if (arr[m] > element)
        {
            h = m - 1;
        }
        else if (arr[m] < element)
        {
            l = m + 1;
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
    std::sort(arr, arr + n);
    int result = binary_search(arr, 0, n - 1, num);
    if (result == -1)
    {
        std::cout << "The element was not found!" << std::endl;
    }
    else
    {
        std::cout << "The element " << arr[result] << " was found at index " << result << std::endl;
    }
}