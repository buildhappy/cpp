/*Date    :2015/08/04
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:try blocks and exceptions:throw
 *Link    :C++ Primer 5th(english version)
              @page 151, $5.6.1 section
 */

#include<iostream>
#include"../../ch1/examples/Sales_item.h"
#include<vector>
#include<string>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
int main()
{
	Sales_item item1, item2;
	cin >> item1 >> item2;
	if(item1.isbn() != item2.isbn())
	{
		cerr << "Data must refer to the same isbn." << endl;
		return -1;
		
	}
	else
	{
		cout << item1 + item2 << endl;
		return 0;
	}
}


