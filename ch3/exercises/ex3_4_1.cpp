/*Date    :2015/06/25 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:reading two strings and compare.
 *Link    :C++ Primer 5th(english version)
              @page90, ex3_4.
 */

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
        string str1;
        string str2;
        cin >> str1 >> str2;
        cout << "The len of " << str1 << " and " << str2 << " is equal or not?"
                << ( str1.size() == str2.size() ) << endl;
        return 0;
}
