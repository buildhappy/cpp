/*Date    :2015/06/25 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:reading the standard input a word at a time.
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
        string word;
        while (cin >> word)
        {
            cout << word << endl;
        }
        return 0;
}
