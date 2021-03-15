
// strtype1.cpp --using the c++ string class


#include <iostream>
#include <string>       // making string class available

int main()
{
    using namespace std;

    char charr1[20];   //create an empty array.

    char charr2[20] = "jaguar";  // create an initialized array.

    string str1;       // create an empty string object

    string str2 = "panther";   // create an initialized string


    cout << "Enter a kind of feline: " << endl;

    cin >> charr1;

    cout << "Enter another kind of feline: " << endl;

    cin >> str1;         // user cin for input 

    cout << "Here are some felines: " << endl;

    cout << charr1 << " " << charr2 << " "<< str1 << " " << str2 << endl;  // use cout for output 

    cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;


    cout << "The third letter in " <<  str2 << " is " << str2[2] << endl;       // use array notation. 

    return 0;
}

