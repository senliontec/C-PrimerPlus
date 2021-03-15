// 程序清单4.16

// init_ptr.cpp  -- initialize a pointer

#include <iostream>

int main()
{
    using namespace std;

    int higgens = 5;

    int *pt = &higgens;

    cout << "Value of higgens is: " << higgens << ", and address of higgens is: " << &higgens << endl;

    cout << "Value of *pt is: " << *pt << ", and address of pt is: " << pt << endl;

    return 0;
}