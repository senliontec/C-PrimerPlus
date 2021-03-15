
//程序清单4.6  numstr.cpp  -- following number input with line input
// 



#include <iostream>

int main()
{
    using namespace std;

    cout << " What year was your house built? \n";

    int year;

    (cin >> year).get(); 
    /* 如果直接用 cin >> year, 将回车键生成的换行符留在了输入队列中。后面的cin.getline()看到回车符后，将认为是一个空行，并将一个空字符串赋给address数组。 用户根本没有输入地址的机会*/

    /*
     * 解决方法： 
     * 1. cin.get()
     * 2. cin.get(ch)
     * 3. (cin >> year).get()
     * 4. (cin >> year).get(ch)
     */


    cout << "What is its street address ? \n";

    char address[80];

    cin.getline(address,80);

    cout << " Year built: " << year << endl;

    cout << " Address: " << address << endl;

    cout << "Done !" << endl; 

    return 0;
}

