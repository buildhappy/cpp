/*Date    :2015/07/20
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:adding elements to a vector.
 *Link    :C++ Primer 5th(english version)
              @page 101, $3.3.2 section
 */

#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cin;
int main()
{
        string word;
        vector<string> text;
        while (cin >> word)
        {
            text.push_back(word);
        }
        return 0;
}

