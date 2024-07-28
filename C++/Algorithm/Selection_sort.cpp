#include <iostream>

void swap(int &x , int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void selectionSort(int arr[], int s)
{
    int minIdx;
    for (int i = 0; i < s - 1; i++)
    {
        minIdx = i;
        for (int j = i + 1; j < s; j++)  //O(n^2)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
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
    selectionSort(a, n);
    std::cout << "Array after selection sort: " << std::endl;
    print(a, n);
}
