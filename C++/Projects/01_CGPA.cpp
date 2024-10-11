#include <iostream>

int CGPA(int arr[], int s)
{
    int cgpa, sum = 0;
    int grades[s];

    for (int i = 0; i < s; i++) 
    {
        grades[i] = arr[i] / 10; 
    }
    for (int i = 0; i < s; i++)
    {
        sum += grades[i];
    }
    cgpa = sum / s;

    return cgpa;
}

int main()
{
    std::cout << "----------------------------CGPA Calculator ----------------------------" << std::endl;
    int n;
    std::cout << "Enter the number of subjects: ";
    std::cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) 
    {
        std::cout << "Enter the grade of Subject " << i + 1 << " : ";
        std::cin >> arr[i];
        if (arr[i] > 100)
        {
            std::cout << "-------------------------------------------------------------" << std::endl
                      << "Error!" << std::endl
                      << "The grade must be in the range of 0 to 100" << std::endl
                      << "-------------------------------------------------------------" << std::endl;
            i--;
        }
    }
    int cgpa = CGPA(arr, n);

    std::cout <<"------------------------------------------------------------------------\n"<<"CGPA = " << cgpa << std::endl
              << "The Percentage is : " << cgpa * 9.5 <<"%"<< std::endl;

    return 0;
}
