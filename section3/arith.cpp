/* 关于 float、double、long double的有效位，其实在编译器文件中已经给出，下面以Borland C++ Builder的float.h
 * 文件相关事项举例
 *
 * The following are the minimum number of significant digits(有效位最小值)
 * 
 * #define DBL_DIG 15  // double
 * #define FLT_DIG 6   // float
 * #define LDBL_DIG 18 // long double
 * 
 * The following are the number of bits used to represent the mantissa(表示尾数的位数)
 *
 * #define DBL_MANT_DIG 53
 * #define FLT_MANT_DIG 24
 * #define LDBL_MANT_DIG 64
 *
 * The following are the maximum and minimum exponent values(最大、最小指数值)
 *  
 * #define DBL_MAX_10_EXP  +308
 * #define FLT_MAX_10_EXP  +38
 * #define LDBL_MAX_10_EXP +4932
 *
 *
 *
 * #define DBL_MIN_10_EXP  -307
 * #define FLT_MIN_10_EXP  -37
 * #define LDBL_MIN_10_EXP -4931
 *
 *
 *
 * */



#include <iostream>

using namespace std;


int main()
{
    
    float hats, heads;
   
    cout.setf(ios_base::fixed, ios_base::floatfield);


    // cout.precision(6);

    cout << "Enter a float number: "<<endl;

    cin >> hats;

    cout << "Enter another float number: "<<endl;

    cin >> heads;

        
    cout << "hats = " << hats << " ;heads = " << heads <<endl;
 
    cout<< " hats + heads = " << hats +heads << endl;


    cout<< " hats - heads = " << hats - heads << endl;  


    cout<< " hats * heads = " << hats * heads << endl;

    cout << " hats / heads = " << hats / heads <<endl;


    return 0;
}

