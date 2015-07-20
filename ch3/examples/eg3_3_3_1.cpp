/*Date    :2015/07/20
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:other vector operations.
 *Link    :C++ Primer 5th(english version)
              @page 102, $3.3.3 section
 */

#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::endl;
int main()
{
        vector<int> v{1,2,3,4,5,6,7,8,9};
        for (auto &i : v)
        {
                i *= i;
        }

        for (auto i : v)
        {
                cout << i << endl;
        }
        return 0;
}

