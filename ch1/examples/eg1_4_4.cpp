/*Date    :2015/06/28 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:using if statement.
 *Link    :C++ Primer 5th(english version)
              @page 13.
 */

#include<iostream>

int main()
{
        int curVal = 0;
        int val = 0;
        if (std::cin >> curVal)
        {
            int cnt = 1;
            while (std::cin >> val)
            {
                    if (curVal == val)
                    {
                            cnt++;
                    }
                    else
                    {
                            std::cout << curVal << " occurs " << cnt << " times"<< std::endl;
                            curVal = val;
                            cnt = 1;
                    }
            }
            std::cout << curVal << " occurs " << cnt << " times"<< std::endl;
        }
        return 0;
}
