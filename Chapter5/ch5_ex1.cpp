/*
Write declarations for the following:
    a pointer to a character,
    an array of 10 integers,
    a reference to an array of 10 integers,
    a pointer to an array of character strings,
    a pointer to a pointer to a character,
    a constat integer,
    a pointer to a constant integer,
    and a constant pointer to an integer.
Initialize each one.
*/
#include <iostream>
#include <string>

int main()
{
    // a pointer to a character
    char *charPtr;
    char myChar = 'A'; // char: 'A', string: "A"
    charPtr = &myChar;

    // an array of 10 integers
    int intArray[10];
    for (int i = 0; i < 10; ++i)
    {
        intArray[i] = i + 1;
    }

    // a reference to an array of 10 integers
    int(&intArrayRef)[10] = intArray;

    // a pointer to an array of character strings
    /*
    char* stringArray[] = {"Hello", "C++", "Programming", "Language"};
    Gives the following warning:
    warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
    */

    const char *stringArray[] = {"Hello", "C++", "Programming", "Language"};

    // a pointer to a pointer to a character
    char **charPtrPtr;
    charPtrPtr = &charPtr;

    // a constant integer
    const int constInt = 5;

    // a pointer to a constant integer
    const int *constIntPtr;
    constIntPtr = &constInt;

    // a constant pointer to an integer
    int someInt = 10;
    int *const constIntPointer = &someInt;

    // Printing out values to demonstrate initialization
    std::cout << "Value of charPtr: " << *charPtr << std::endl;
    std::cout << "Contents of intArray: ";
    for (int i = 0; i < 10; ++i)
    {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Reference to intArray: ";
    for (int i = 0; i < 10; ++i)
    {
        std::cout << intArrayRef[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Contents of stringArray: ";
    for (const auto &str : stringArray)
    {
        std::cout << str << " ";
    }
    std::cout << std::endl;
    std::cout << "Value of charPtrPtr: " << **charPtrPtr << std::endl;
    std::cout << "Value of constInt: " << constInt << std::endl;
    std::cout << "Value of constIntPtr: " << *constIntPtr << std::endl;
    std::cout << "Value of constIntPointer: " << *constIntPointer << std::endl;

    return 0;
}
