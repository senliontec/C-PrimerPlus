// 程序清单3.1 limits.cpp

// limits.cpp -- some integer limits

#include <iostream>
#include <climits> //use limits.h for old system

// short 至少16位
// int 至少与 short 一样长
// long 至少32位， 且至少与int一样长
// long long 至少64位，且至少与long一样长
// 字节(byte)通常指8位的内存单元，字节就是指描述计算机内存量的度量单位

int main()
{

    using namespace std;

    int n_int = INT_MAX; //initialize n_int to max int value

    short n_short = SHRT_MAX; // symbols defined in climits file

    long n_long = LONG_MAX;

    long long n_llong = LLONG_MAX;

    //sizeof operator yields size of type or of variable

    cout << "int is " << sizeof(int) << " bytes(字节，1字节=8位)." << endl;

    cout << "short is " << sizeof(n_short) << " bytes." << endl;

    cout << "long is " << sizeof(n_long) << " bytes." << endl;

    cout << "long long is " << sizeof(n_llong) << " bytes.\n"
         << endl;

    //////////////////////////////////////////////////////////////////

    cout << "Maximum values: " << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl
         << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    return 0;
}