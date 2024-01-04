// What, on your system, are the restrictions on the pointer types char*, int*, and void*? For example, may an int* have an odd value? Hint: alignment.

/*
Pointer types in C++ have restrictions based on alignment,
which means the memory addresses they point to must adhere to certain alignment requirements for the respective data types.

For instance:

- char*: There are typically no restrictions on the alignment of `char*` pointers.
They can generally point to any byte in memory, and their alignment requirements are usually very flexible.
An odd address is permissible for `char*` since they can access individual bytes, and the alignment requirement is usually just for a single byte.

- int*: An `int*` typically needs to be aligned to the size of an `int` on most systems.
For example, on systems where `int` is 4 bytes, `int*` should point to memory addresses that are multiples of 4.
If an `int*` holds an odd value (not aligned properly), it might cause issues or performance penalties,
especially on architectures that enforce strict alignment rules.

- void*: Similar to `char*`, `void*` pointers typically have looser alignment requirements.
They can point to any type of object, but casting them to other pointer types needs to ensure proper alignment
for the specific type they are cast to. An odd address for a `void*` might be permissible,
but it's best practice to align them properly when used in specific pointer arithmetic or type conversions to avoid potential issues.

The alignment requirements may vary across different systems and architectures, but generally,
 adhering to proper alignment is crucial to avoid issues related to memory access violations or
 performance penalties due to misaligned memory accesses.

*/

#include <iostream>
#include <cstdint>

int main()
{
    // Declarations not alligned
    char *charPtr = reinterpret_cast<char *>(0x11); // Misaligned address for char*
    int *intPtr = reinterpret_cast<int *>(0x11);    // Misaligned address for int*
    void *voidPtr = reinterpret_cast<void *>(0x11); // Misaligned address for void*

    // Attempt to dereference the pointers and see the effects
    // (Note: Dereferencing misaligned pointers can lead to undefined behavior)
    // std::cout << "Value at misaligned charPtr: " << static_cast<void>(*charPtr) << std::endl;

    // This might lead to more severe issues due to stricter alignment requirements for int
    std::cout << "Value at misaligned intPtr: " << *intPtr << std::endl;

    // Dereferencing void* isn't allowed directly without casting it to a proper type
    // So, no direct dereferencing like intPtr or charPtr
    // std::cout << "Value at misaligned voidPtr: " << *voidPtr << std::endl;

    return 0;
}
// $ ./ch5_ex2
// [1]    63633 segmentation fault  ./ch5_ex2