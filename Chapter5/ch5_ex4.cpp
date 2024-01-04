/*
Write a function that swaps (exchanges the values of) two integers. User int* as the argument type.
Write another swap function using int& as the argument type.
*/

#include <iostream>

// Function to swap integers using int* as the argument type
void swapIntPtr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapIntPtrWOTemp(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Function to swap integers using int& as the argument type
void swapIntRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swapIntRefWOTemp(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int x = 5, y = 10;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    // Using swapIntPtr with int* arguments
    swapIntPtr(&x, &y);
    std::cout << "After swapIntPtr: x = " << x << ", y = " << y << std::endl;

    // Reset values
    x = 5;
    y = 10;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    // Using swapIntPtr with int* arguments
    swapIntPtrWOTemp(&x, &y);
    std::cout << "After swapIntPtrWOTemp: x = " << x << ", y = " << y << std::endl;

    // Reset values
    x = 5;
    y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    // Using swapIntRef with int& arguments
    swapIntRef(x, y);
    std::cout << "After swapIntRef: x = " << x << ", y = " << y << std::endl;

    // Reset values
    x = 5;
    y = 10;

    // Using swapIntRef with int& arguments
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swapIntRefWOTemp(x, y);
    std::cout << "After swapIntRefWOTemp: x = " << x << ", y = " << y << std::endl;

    return 0;
}
