#include <iostream>
#include <complex>
#include <cmath>
#include <limits>

using namespace std;

// Exercise 4.11.2:
char ch; // declaration without definition.

string s = "hello world"; // declaration and definition.
int count = 1;
const double pi = 3.1413926535897932385;
extern int error_number;

const char *name = "Felipe Maion";
const char *season[] = {"Winter", "Spring", "Summer", "Fall"};

struct Date
{
    int day;
    int month;
    int year;
};

int day(Date *p)
{
    return p->day;
}
double my_sqrt(double d);
double my_sqrt(double d)
{
    cout << "sqrt(" << d << ")=";
    return sqrt(d);
}

template <class T>
T abs(T a)
{
    return a > 0 ? a : -a;
}

typedef complex<short> Point;
enum Beer
{
    Carlsberg,
    Pilsner,
    Budweiser,
    Corona
};

struct User
{
    int id;
    const char *username;
    Point location;
    Date birthdate;
    double salary;
    bool active;
    const char *name;
    int beer;
};

namespace NS
{
    int a;
}

int main()
{
    // Exercise 4.11.1:
    cout << "Exercise 4.11.1:\nHello, World!" << endl;
    // Exercise 4.11.2:
    cout << "\nExercise 4.11.2:\n";

    User u;
    u.id = 1;
    u.username = "fmaion";
    u.name = name;
    u.birthdate = (Date){3, 4, 1985};
    cout << "Name: " << u.name << "\nID: " << u.id << "\nBirthdate: " << u.birthdate.day << "/" << u.birthdate.month << "/" << u.birthdate.year << "\n"
         << endl;
    ch = 'a'; // Definition without declaration.
    cout << "Absolute value of -5: " << abs(-5) << endl;
    cout << "Square root of 16: " << my_sqrt(16) << endl;
    cout << s << endl;
    // Exercise 4.11.3:
    cout << "Exercise 4.11.3:\n";

    cout << "Size of fundamental types:\n";
    cout << "Size of char: " << sizeof(char) << " bytes\n";
    cout << "Size of short: " << sizeof(short) << " bytes\n";
    cout << "Size of int: " << sizeof(int) << " bytes\n";
    cout << "Size of long: " << sizeof(long) << " bytes\n";
    cout << "Size of long long: " << sizeof(long long) << " bytes\n";
    cout << "Size of float: " << sizeof(float) << " bytes\n";
    cout << "Size of double: " << sizeof(double) << " bytes\n";
    cout << "Size of long double: " << sizeof(long double) << " bytes\n";
    cout << "Size of bool: " << sizeof(bool) << " bytes\n";

    // Pointer types
    cout << "\nSize of pointer types:\n";
    cout << "Size of int*: " << sizeof(int *) << " bytes\n";
    cout << "Size of char*: " << sizeof(char *) << " bytes\n";
    cout << "Size of double*: " << sizeof(double *) << " bytes\n";

    // Enumerations
    enum Color
    {
        RED,
        GREEN,
        BLUE
    };
    enum class Direction
    {
        LEFT,
        RIGHT,
        UP,
        DOWN
    };
    cout << "\nSize of enumerations:\n";
    cout << "Size of enum Beer: " << sizeof(Beer) << " bytes\n"
         << "Size of enum Color: " << sizeof(Color) << " bytes\n"
         << "Size of enum class Direction: " << sizeof(Direction) << " bytes\n"
         << endl;

    // Create a User instance
    User user1 = {1, "user123", {10, 20}, {3, 4, 1985}, 50000.0, true, "John Doe", Beer::Carlsberg};

    // Access and print user information
    cout << "User ID: " << user1.id << endl;
    cout << "Username: " << user1.username << endl;
    cout << "Location: (" << user1.location.real() << ", " << user1.location.imag() << ")" << endl;
    cout << "Birthdate: " << user1.birthdate.day << "/" << user1.birthdate.month << "/" << user1.birthdate.year << endl;
    cout << "Salary: " << user1.salary << endl;
    cout << "Active: " << boolalpha << user1.active << endl;
    cout << "Name: " << user1.name << endl;
    cout << "Favorite Beer: ";

    // cin >> user1.beer;
    user1.beer = Budweiser;
    // Print the favorite beer using a switch statement
    switch (user1.beer)
    {
    case Beer::Carlsberg:
        cout << "Carlsberg";
        break;
    case Beer::Pilsner:
        cout << "Pilsner";
        break;
    case Beer::Budweiser:
        cout << "Budweiser";
        break;
    case Beer::Corona:
        cout << "Corona";
        break;
    default:
        cout << "Unknown beer";
        break;
    }
    cout << endl;

    // Exercise 4.11.4:
    cout << "\nExercise 4.11.4:\n";
    for (int i = 48; i < 127; i++)
    {
        cout
            << char(i) << " Hex:" << hex << i << " Dec:" << dec << i << " Oct:" << oct << i << "" << endl;
    }
    cout << "\nExercise 4.11.5:\n";
    cout << dec << endl; // Fix back to dec (otherwise it will display in octal)

    cout << "Largest and smallest values for different data types:\n";

    // char ???!??!?!?!?!?
    cout << "char: " << static_cast<int>(numeric_limits<char>::min()) << " to "
         << static_cast<int>(numeric_limits<char>::max()) << endl;

    // unsigned char
    cout << "unsigned char: " << static_cast<int>(numeric_limits<unsigned char>::min()) << " to "
         << static_cast<int>(numeric_limits<unsigned char>::max()) << endl;

    // short
    cout << "short: " << numeric_limits<short>::min() << " to "
         << numeric_limits<short>::max() << endl;

    // int
    cout << "int: " << numeric_limits<int>::min() << " to "
         << numeric_limits<int>::max() << endl;

    // float
    cout << "float: " << numeric_limits<float>::lowest() << " to "
         << numeric_limits<float>::max() << endl;

    // double
    cout << "double: " << numeric_limits<double>::lowest() << " to "
         << numeric_limits<double>::max() << endl;

    // long double
    cout << "long double: " << numeric_limits<long double>::lowest() << " to "
         << numeric_limits<long double>::max() << endl;

    // unsigned
    cout << "unsigned: " << 0 << " to "
         << numeric_limits<unsigned>::max() << endl;
}