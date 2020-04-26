#include <iostream>

void printArrayElements(int myArray[], int arraySize);

int main()
{
    int someArray[5] = {12,34,5,4,2};
    int someArraySize = 5;

    printArrayElements(someArray, someArraySize);
}

void printArrayElements(int myArray[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << i + 1 << "   -----------  " << myArray[i] << std::endl;
    }
}
