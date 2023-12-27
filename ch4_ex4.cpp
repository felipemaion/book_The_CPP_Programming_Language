#include <format>
#include <iostream>
#include <limits>

// Don't repeat yourself, make functions :)
template <typename type_t>
void show_limits()
{
    { // -std=c++20 must be activated in compiler to use format.
        std::cout << std::format(
            "{} has a range of [{},{}]\n",
            typeid(type_t).name(),
            std::numeric_limits<type_t>::min(),
            std::numeric_limits<type_t>::max());
    }
}
// char needs a bit of specific formatting
template <>
void show_limits<char>()
{ // -std=c++20 must be activated in compiler to use format.
    std::cout << std::format(
        "{} has a range of [{:d},{:d}]\n",
        typeid(char).name(),
        std::numeric_limits<char>::min(),
        std::numeric_limits<char>::max());
}

// variadic function template
template <typename... types_t>
void show_all_limits()
{
    // fold expression
    // will create a call to show_limits for each of the types used.
    ((show_limits<types_t>()), ...);
}

int main()
{
    show_all_limits<char, short, int, long, float, double, long double, unsigned>();
}