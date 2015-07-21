/*Date    :2015/07/21
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:intro to iterators.
 *Link    :C++ Primer 5th(english version)
              @page 108, $3.3.4 section
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
        for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        {
            *it = toupper(*it);
        }
        cout << s << endl;
        return 0;
}

