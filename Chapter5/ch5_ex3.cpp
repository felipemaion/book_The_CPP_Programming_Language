/*
Use typedef to define the types:
    unsigned char,
    const unsigned char,
    pointer to integer,
    pointer to pointer to char,
    pointer to array of char,
    array of 7 pointers to int,
    pointer to an array of 7 pointers to int,
    and array of 8 arrays of 7 pointers to int.

*/

#include <iostream>

typedef unsigned char UChar;
typedef const unsigned char ConstUChar;
typedef int *IntPtr;
typedef char **CharPtrPtr;
typedef char *CharArrayPtr;
typedef int *IntPtrArray[7];
typedef int **IntPtrArrayPtr;
typedef int *IntPtrArray[7];
typedef int *IntPtrArray7[7];
typedef IntPtrArray7 IntPtrArray8[8];

int main()
{
    // Demonstrating the usage of typedef-ed types
    UChar myUnsignedChar = 'A';
    ConstUChar myConstUnsignedChar = 'B';
    IntPtr myIntPtr;
    CharPtrPtr myCharPtrPtr;
    CharArrayPtr myCharArrayPtr;
    IntPtrArray myIntPtrArray;
    IntPtrArrayPtr myIntPtrArrayPtr;
    IntPtrArray7 myIntPtrArray7;
    IntPtrArray8 myIntPtrArray8;

    // Just to prevent unused variable warnings, no actual operation.
    (void)myUnsignedChar;
    (void)myConstUnsignedChar;
    (void)myIntPtr;
    (void)myCharPtrPtr;
    (void)myCharArrayPtr;
    (void)myIntPtrArray;
    (void)myIntPtrArrayPtr;
    (void)myIntPtrArray7;
    (void)myIntPtrArray8;

    return 0;
}
