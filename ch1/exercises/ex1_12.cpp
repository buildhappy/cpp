/*Date    :2015/06/25 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:using for loop.
 *Link    :C++ Primer 5th(english version)
              @page 11, ex1_12.
 */

#include<iostream>

int main()
{
        int sum = 0;
        for (int i = -100; i <= 100; i++)
        {
            sum += i;
        }
        std::cout << "The sum of -100 to 100 incursive is " << sum << std::endl; 
        return 0;
}
