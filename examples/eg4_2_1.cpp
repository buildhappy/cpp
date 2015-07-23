/*Date    :2015/07/23
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:arithmetic operators.
 *Link    :C++ Primer 5th(english version)
              @page 113, $4.2 section
 */

#include<iostream>
int main()
{
	int i = 1024;
	int k = -i;
	bool b = true;
	bool b2 = -b; // b2 is true. -b = -1 ; -1 is true.
	int ival1 = 21 / 6;
	int ival2 = 21 / 7;

	int ival = 42;
	double dval = 3.14;
	ival = ival % 12;
	// ival = ival % dval; //error:dval is double,must be int.

        return 0;
}

