// 程序清单3.4 hexoct2.cpp 
// hexoct2.cpp --display values in hex and octal

#include <iostream>

using namespace std;

int main()
{

    int chest = 42;

    int waist = 42;

    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;

    cout << dec;
    cout << "chest = " << chest << " (decimal for 42)" << endl;

    cout << hex; //  不会在屏幕上显示任何内容，而只是修改cout显示整数的方式。hex相当与一条消息，告诉cout采取何种行为。
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;

    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    return 0;
}
