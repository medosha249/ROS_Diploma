#include <iostream>

void insertion_sort(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)  //O(n^2)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    insertion_sort(a, n);
    std::cout << "Array after Insertion sort: " << std::endl;
    print(a, n);
}