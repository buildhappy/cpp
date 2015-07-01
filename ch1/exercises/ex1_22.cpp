/*Date    :2015/07/01
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:intro to class: add unknown number of sales_items whose isbn is the same.
 *Link    :C++ Primer 5th(english version)
              @page 22,ex1_22
 */

#include<iostream>
#include"../examples/Sales_item.h"

int main()
{
        Sales_item item,sum;
        if(std::cin >> sum) 
        {
            while(std::cin >> item)
            {
                    sum += item;
            }
            std::cout << sum << std::endl; // print their sum.
        }
        else
        {
                std::cout << "no input.";
        }
        return 0;
}
