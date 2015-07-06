/*Date    :2015/06/25 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:using while loop and decreament operator "--" ,print 10 to 1.
 *Link    :C++ Primer 5th(english version)
              @page 13,ex1_10 and @page 83, ex3_1.
 */

#include<iostream>
using std::cout;
using std::endl;

int main()
{
        int val = 10;
        while (val > 0)
        {
            cout << val << endl;
            --val;
        }
        return 0;
}
