/*Date    :2015/07/20 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:reading a sequence of ints and store them in a vector.
 *Link    :C++ Primer 5th(english version)
              @page102, ex3_14.
 */

#include<iostream>
#include<vector>
using std::vector;
using std::cin;
int main()
{
        vector<int> v;
        int i;
        while(cin >> i)
        {
                v.push_back(i);
        }
        return 0;
}
