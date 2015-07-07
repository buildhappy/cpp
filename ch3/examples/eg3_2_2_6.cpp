/*Date    :2015/07/07
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:operations on string.
 *Link    :C++ Primer 5th(english version)
              @page 85, $3.2 section
 */

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string line;
	while(getline(cin, line))
	{
		if (line.size() > 10)
		{
			cout << line << endl;
		}
	}
        return 0;
}
