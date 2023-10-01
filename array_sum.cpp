#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int myArray[n];
    int arraySum = 0;

    std::cout << "Enter " << n << " elements, one at a time:\n";
    for (int i = 0; i < n; ++i)
    {
        std::cin >> myArray[i];
        arraySum += myArray[i];
    }

    std::cout << "Sum of elements in the array: " << arraySum << std::endl;

    return 0;
}
