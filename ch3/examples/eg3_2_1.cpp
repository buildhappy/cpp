/*Date    :2015/07/07
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:string initinaztion.
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
	string s1;
	string s2 = s1;
	string s3(s1);
	string s4("hello");
	//string s5{"hello"};//error.
	string s55 = "hello";
	string s6(10,'c');
	string s7 = string(10,'c');
        return 0;
}
