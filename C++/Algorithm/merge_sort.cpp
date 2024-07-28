#include <iostream>

void merge(int arr[], int l, int m, int r)
{
    int arr1 = m - l + 1;
    int arr2 = r - m;

    auto *leftArray = new int[arr1];
    auto *rightArray = new int[arr2];

    int i, j, k;
    for (i = 0; i < arr1; i++)
    {
        leftArray[i] = arr[l + i];
    }
    for (j = 0; j < arr2; j++)
    {
        rightArray[j] = arr[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;
    while (i < arr1 && j < arr2)
    {
        if (leftArray[i] <= rightArray[j])
        {
            arr[k] = leftArray[i];
            i++;
        }
        else
        {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < arr1)
    {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < arr2)
    {
        arr[k] = rightArray[j];
        j++;
        k++;
    }

    delete[] leftArray;
    delete[] rightArray;
}

void merge_sort(int arr[], int begin, int end) // O(n log n)
{
    if (begin >= end)
    {
        return;
    }

    auto mid = begin + (end - begin) / 2;
    merge_sort(arr, begin, mid);
    merge_sort(arr, mid + 1, end);
    merge(arr, begin, mid, end);
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
    int arr[] = {20, 10, 50, 40, 30, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, 0, n - 1);
    print(arr, n);
}
