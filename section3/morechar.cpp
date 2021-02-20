// 程序清单3.6 morechar.cpp
// morechar.cpp -- the char type and int type contrasted

#include <iostream>

int main()
{
    using namespace std;

    char ch = 'M'; // assign ASCII code M to ch

    int i = ch; // store same code in an int

    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code: " << endl;

    ch = ch + 1; // change character code in ch, 将字符+1，相当与对应 77 + 1 的字符

    i = ch; // save new character code in i

    cout << "The ASCII code for " << ch << " is " << i << endl;

    // using the cout.put() member function to display a char

    cout << "Displaying char ch using cout.put(ch): " << endl;

    cout.put(ch);

    // using cout.put() to display a char constant

    cout.put('!') << endl
                  << "Done" << endl;

    return 0;
}