/*
Define function f(char), g(char&), and h(const char&). Call them with the arguments 'a'. 49, 3300, c, uc, and sc, where c is char, uc is an unsigned char, and sc is a signed char.
Which call is legal? Whcihc calls cause the compiler to introduce a temporary variable?
*/

#include <iostream>

void f(char)
{
    std::cout << "Function f(char)" << std::endl;
}

void g(char &)
{
    std::cout << "Function g(char&)" << std::endl;
}

void h(const char &)
{
    std::cout << "Function h(const char&)" << std::endl;
}

int main()
{
    char c = 'a';
    int i = 49;
    short s = 3300;
    char uc = 'c';
    unsigned char sc = 's';

    // Call the functions with different arguments
    f('a'); // Call f(char)
    // g('a'); // Illegal: Cannot bind non-const reference to a temporary
    //  error: cannot bind non-const lvalue reference of type 'char&' to an rvalue of type 'char'

    g(c);   // Call g(char&)
    h('a'); // Legal: Calls h(const char&)
    h(c);   // Call h(const char&)
    h(uc);  // Call h(const char&) - Conversion from unsigned char to const char&
    h(sc);  // Call h(const char&) - Conversion from signed char to const char&

    return 0;
}

/*
Explanation:

f('a'): Calls f(char) with a character literal, which is legal.
g('a'): Will not compile because you cannot bind a non-const reference to a temporary (character literal is a temporary).
g(c): Calls g(char&) with a reference to a char variable, which is legal.
h('a'): Calls h(const char&) because a temporary const char is created from the character literal 'a'.
h(c): Calls h(const char&) directly with a reference to char c, which is legal.
h(uc): Calls h(const char&) as there's an implicit conversion from unsigned char to const char&.
h(sc): Calls h(const char&) as there's an implicit conversion from signed char to const char&.
In summary, the legal calls are: f('a'), g(c), h('a'), h(c), h(uc), and h(sc). Calls that cause the compiler to introduce a temporary are h('a'), h(uc), and h(sc).

*/