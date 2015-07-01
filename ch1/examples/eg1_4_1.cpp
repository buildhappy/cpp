/*Date    :2015/06/25 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:using while loop: sum 1 to 10 incursive.
 *Link    :C++ Primer 5th(english version)
              @page 11.
 */

#include<iostream>

int main()
{
        int sum = 0, val = 0;
        while (val < 10)
        {
            ++val;
            sum += val;
        }
        std::cout << "The sum of 1 to 10 incursive is " << sum << std::endl; 
        return 0;
}
