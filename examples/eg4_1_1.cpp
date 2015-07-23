/*Date    :2015/07/23
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:expressions.
 *Link    :C++ Primer 5th(english version)
              @page 113, $4.1 section
 */

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	cout << 5 + 10 * 20/2 << endl;
	cout << (6 + 3) * (4 / 2 + 2) << endl;  //36
	cout << ((6 + 3) * 4) / 2 + 2 << endl;  //20
	cout << 6 + 3 * 4 / (2 + 2) << endl;    //9

	int ia[] = {0,2,4,6,8};
	int last = *(ia + 4);
	int last2 = *ia + 4;

	int i = f1() + f2(); //if f1() and f2() is defined.

	int i = 0;
	cout << i << " " << ++i << endl; //undefined


        return 0;
}

