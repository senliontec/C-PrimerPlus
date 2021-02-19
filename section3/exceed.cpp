// 程序清单3.2 exceed.cpp
// exceed.cpp --exceeding some integer limits

/*

注明： 整型变量的行为就像里程表，如果超越了限制，其值将为范围另一端的取值。

*/

#include <iostream>

#define ZERO 0 // make ZERO symbol for 0 value

#include <climits> // defines INT_MAX as largest int value

int main()
{
    using namespace std;

    short sam = SHRT_MAX; // initialize a variable to max value.

    unsigned short sue = sam; // okay if variable sam already defined

    cout << "Sam has " << sam << " dollars and Sue has  " << sue << " dollars deposited. " << endl
         << "Add $1 to each account. " << endl
         << "Now ";

    sam = sam + 1;
    sue = sue + 1;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dolloars deposited." << endl
         << "pool Sam!" << endl;

    sam = ZERO;
    sue = ZERO;

    cout << "sam has " << sam << " dollars and sue has " << sue << " dollars deposited. " << endl;

    cout << "Take $1 from each account. " << endl
         << "Now ";

    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl
         << "Lucky Sue!" << endl;

    return 0;
}