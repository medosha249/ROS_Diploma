#include <iostream>

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i -1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]); //O(n^2)
            }
        }
    }
}
void print(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int a[] = {60, 40, 50, 30, 10, 20};
    int n = sizeof(a) / sizeof(a[0]);
    bubble_sort(a, n);
    std::cout << "Array after Insertion sort: " << std::endl;
    print(a, n);
}