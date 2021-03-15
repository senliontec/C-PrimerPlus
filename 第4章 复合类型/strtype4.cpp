// 程序清单4.10 
// strtype4.cpp -- line input

#include <iostream>
#include <string>            // make string class available
#include <cstring>           // C-style string library



int main()
{
    using namespace std;

    char charr[20];

    string str;

    cout << "Length of string in charr before input: " << strlen(charr) << endl;

    cout << "Length of string in str before input: " << str.size() << endl;

    cout << "Enter a line of text: "<< endl;
    
    cin.getline(charr,20);     // indicate maximum length

    cout << "You entered: " << charr << endl;

    cout << "Enter another line of text: " << endl;

    getline(cin,str);       // cin new an argument; no length specifier

    cout << "You entered: " << str << endl;

    cout << "Length of string in charr after input: "<< strlen(charr) << endl;

    cout << "Length of string in str after input: " << str.size() << endl;


    return 0;
}

