// 程序清单3.7 bondini.cpp 

// bondini.cpp --using escape sequences

#include <iostream>

int main()
{
    using namespace std;

    cout << "\aOperation \"HyperHype \" is now activated! " << endl;
    cout << "Enter your agent code:_____________\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\a You entered " << code << "..." << endl;
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    return 0;
}
