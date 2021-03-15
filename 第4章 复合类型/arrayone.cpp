
//程序清单4.1 arrayone.cpp --small arrays os integers 

#include <iostream>

int main()
{
    using namespace std;

    int yams[3];  // creates arry with three elements

    yams[0] = 7;  // assign value to first element 
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20,30,5}; // create, initialize array 

    // NOTE: If your c++ compiler or translator can't initialize this array, use static int yamcosts[3] instead of yamcosts[3]
    
    cout<<" Total yams = "<< yams[0] + yams[1] + yams[2] <<endl;

    cout<<" The package with "<< yams[1] <<" yams costs "<< yamcosts[1]<<" cents per yam. "<<endl;

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];

    cout << " The total yam expense is "<< total << " cents "<<endl;


    cout << "\n Size of yams array = " <<sizeof yams << " bytes"<<endl;

    cout << "Size of one element = " <<sizeof yams[0]<< " bytes "<<endl;




    


    return 0;
}

