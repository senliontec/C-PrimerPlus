// 程序清单2.6 convert.cpp
// convert.cpp --converts stone to pounds

#include <iostream>

using namespace std; // affects all function definitions in this file.

int stonetolb(int); // function prototype

int main()
{
    //using namespace std;

    int stone;

    cout << "Enter the weight in stone: ";

    cin >> stone;

    int pounds = stonetolb(stone);

    cout << stone << " stone = ";

    cout << pounds << " pounds. " << endl;

    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}
