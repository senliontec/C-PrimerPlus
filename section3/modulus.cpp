
// modulus.cpp  --uses % operator to convert lbs to stone

#include <iostream>

int main()
{
    using namespace std;

    const int lbs_per_stn = 14;

    int lbs;

    cout<<"Enter your weight in pounds: "<<endl;

    cin>>lbs;

    int stone = lbs / lbs_per_stn;

    int pounds = lbs % lbs_per_stn;

    cout << lbs << " pounds are " << stone << " stone, "<< pounds << " pounds(s)"<<endl;

    return 0;
}

