/*Date    :2015/06/25 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:reading the standard input a line at a time.
 *Link    :C++ Primer 5th(english version)
              @page90, ex3_2.
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
        while (getline(cin,line))
        {
            cout << line << endl;
        }
        return 0;
}
