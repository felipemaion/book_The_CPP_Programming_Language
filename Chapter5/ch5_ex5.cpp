/*
What is the size of the array str in the following example:
char str[] = "a short string";

What is the length of the string "a short string"?
*/

#include <iostream>
#include <cstring> // Include for strlen function

int main()
{
    char str[] = "a short string";

    // Calculate size of the array
    size_t sizeOfArray = sizeof(str);
    std::cout << "Size of the array 'str': " << sizeOfArray << std::endl;

    // Calculate length of the string
    size_t lengthOfString = std::strlen(str);

    std::cout << "Length of the string 'a short string': " << lengthOfString << std::endl;

    return 0;
}
