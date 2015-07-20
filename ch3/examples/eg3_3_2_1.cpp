/*Date    :2015/07/20
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:adding elements to a vector.
 *Link    :C++ Primer 5th(english version)
              @page 101, $3.3.2 section
 */

#include<iostream>
#include<vector>
using std::vector;
int main()
{
        vector<int> v2;
        for(int i = 0; i != 100; ++i)
        {
            v2.push_back(i);
        }
        return 0;
}

