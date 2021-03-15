// 程序清单3.8 floatnum.cpp

/*
  C 和 C++ 对有效位数的要求是： 

  float至少32位
  double至少48位， 且不少于 float
  long double 至少和 double 一样多

  通常 float为32位，double为64位，long double 为80、96、128位

*/

#include <iostream>

int main()
{
	using namespace std;

	cout.setf(ios::fixed,ios_base::floatfield);

	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;

	const float million = 1.0e6;

	cout << "tub = " << tub << ", a million tubs = " << million * tub << ", and tsen million tubs = " << 10 * million *tub << endl;

	cout << "mint = " << mint << " and a million mints = " << million * mint << endl;




	return 0;
}
