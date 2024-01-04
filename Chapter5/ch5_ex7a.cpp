/*
Define a table of the names of months of the year and the number of days in each month.
Write out the table. Do this twice; once using an array of char for the names and an array
for the number of dauys and once using an array of structures, with each structure holding the name of a month and the number of days in it.
*/

#include <iostream>
#include <string>

int main()
{
    const char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"};

    int days[] = {31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

    std::cout << "Months of the Year and Days (Array of Char and Array of Int):" << std::endl;
    for (int i = 0; i < 12; ++i)
    {
        std::cout << months[i] << " has " << days[i] << " days" << std::endl;
    }

    return 0;
}
