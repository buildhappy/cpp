/*Date    :2015/07/23
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:logic and relational operators.
 *Link    :C++ Primer 5th(english version)
              @page 141, $4.3 section
 */

#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cout;
using std::endl;
int main()
{
        // or "||" operator.
        vector<string> text;
        for (const auto &s : text)
        {
                if (s.empty() || s[s.size()-1] == '.')
                        cout << endl;
                else
                {
                        cout << s;
                }
        }

        // not operator
        vector<int> vec = {0,1,2};
        if (!vec.empty())
        {
                cout << vec[0];
        }
        
        //relation operator.
        int i , j ,k ;
        if (i < j < k)   // i < j => true => 1<k;
        if (i < j && j < k)
        int val;
        if (val)
        if (!val)


        return 0;
}


