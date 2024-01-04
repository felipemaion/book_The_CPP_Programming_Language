/*
Define a table of the names of months of the year and the number of days in each month.
Write out the table. Do this twice; once using an array of char for the names and an array
for the number of dauys and once using an array of structures, with each structure holding the name of a month and the number of days in it.
*/

#include <iostream>
#include <string>

struct Month
{
    std::string name;
    int days;
};

int main()
{
    Month months[] = {
        {"January", 31}, {"February", 28}, {"March", 31}, {"April", 30}, {"May", 31}, {"June", 30}, {"July", 31}, {"August", 31}, {"September", 30}, {"October", 31}, {"November", 30}, {"December", 31}};

    std::cout << "Months of the Year and Days (Array of Structures):" << std::endl;
    for (const auto &month : months)
    {
        std::cout << month.name << " has " << month.days << " days" << std::endl;
    }

    return 0;
}
