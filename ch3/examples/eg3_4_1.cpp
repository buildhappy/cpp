/*Date    :2015/07/21
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:intro to iterators.
 *Link    :C++ Primer 5th(english version)
              @page 106, $3.3.4 section
 */

#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
        string s("some string");
        if(s.begin() != s.end())
        {
            auto it = s.begin();
            *it = toupper(*it);
        }
        cout << s << endl;
        return 0;
}

