
// 程序清单4.5  instr3.cpp -- reading more than one word with get() & get() 
/*
cin.get(name,size): 将一个字符串放入数组中

cin.get()：读取一个字符

*/


#include <iostream>

int main()
{
    using namespace std;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];


    cout << " Enter your name:\n";

    cin.get(name,ArSize).get(); // read string, newline

    cout << "Enter your favorite dessert: \n";

    cin.get(dessert,ArSize).get();

    cout << " I have some delicious " << dessert;

    cout << " for you, " << name  << ".\n";




    return 0;
}

