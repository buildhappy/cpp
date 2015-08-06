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
#include<stdexcept>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::runtime_error;
int main()
{
	Sales_item item1, item2;
	cin >> item1 >> item2;
	if(item1.isbn() != item2.isbn())
	{
		throw runtime_error("Data must be the same isbn\n");	
	}
	cout << item1 + item2 << endl;
	return 0;
}


