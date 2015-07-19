/*Date    :2015/07/19
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:The string::size_type Type.
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
            string::size_type len = line.size();
            cout << "the len of string \"" << line << "\" is " << len << endl;
	}
    return 0;
}
