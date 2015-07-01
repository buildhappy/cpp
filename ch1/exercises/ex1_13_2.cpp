/*Date    :2015/06/25 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:using for loop and decreament operator "--" ,print 10 to 1.
 *Link    :C++ Primer 5th(english version)
              @page 13,ex1_13,rewrite ex1_10.
 */

#include<iostream>

int main()
{
        int val = 10;
        for (int val= 10; val > 0; val--)
        {
            std::cout << val << std::endl;
        }
        return 0;
}
