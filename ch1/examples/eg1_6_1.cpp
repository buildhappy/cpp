/*Date    :2015/07/01
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:intro to class: 
 *Link    :C++ Primer 5th(english version)
              @page 24,section $1.6
 */

#include<iostream>
#include"Sales_item.h"

int main()
{
        Sales_item total;
        if(std::cin >> total)
        {
            Sales_item trans;
            while(std::cin >> trans)
            {
                if(trans.isbn() == total.isbn())
                {
                        total += trans;
                }
                else
                {
                        std::cout << total << std::endl;
                        total = trans;
                }
            }
            std::cout << total << std::endl;
        }
        return 0;
}
