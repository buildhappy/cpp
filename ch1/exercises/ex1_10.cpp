/*Date    :2015/06/25 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:using while loop and decreament operator "--" ,print 10 to 1.
 *Link    :C++ Primer 5th(english version)
              @page 13,ex1_10.
 */

#include<iostream>

int main()
{
        int val = 10;
        while (val > 0)
        {
            std::cout << val << std::endl;
            --val;
        }
        return 0;
}
