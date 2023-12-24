#include <iostream>
#include <complex>
#include <cmath>

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
    return std::sqrt(d);
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
    cout << "Hello, World!" << endl;

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
}