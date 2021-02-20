// 程序清单3.5 chartype.cpp
// chartype.cpp -- the char type

#include <iostream>

int main()
{
    using namespace std;

    char ch; // declare a char variable

    cout << "Enter a character: " << endl;

    cin >> ch;

    cout << "Hola! Thank you for the " << ch << " character. " << endl;

    return 0;
}