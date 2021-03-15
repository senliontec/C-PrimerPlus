// 程序清单4.2 string.cpp --storing strings in an array

#include <iostream>
#include <cstring> // for the strlen() function


int main()
{

    using namespace std;

    const int Size = 15;

    char name1[Size];        // empty array

    char name2[Size] = "C++oWboy";


    // NOTE: some implementation may require the static keyword to initialize the array name2
    

    cout << "Howdy! I am " << name2 << " ! What's your name ?" << endl;

    cin >> name1;

    cout << "Well, " << name1 << " , your name has " << strlen(name1) << " letters and is stored in an array of " << sizeof(name1) << " bytes.  And your initial is " << name1[0] << " ." << endl;



    name2[3] = '\0';    // set to null character

    cout << "Here are the first 3 characters of my name : " << name2 << endl;

    return 0;
}

