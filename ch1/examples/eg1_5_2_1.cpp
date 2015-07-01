/*Date    :2015/07/01
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:intro to class: a first look at member function.
 *Link    :C++ Primer 5th(english version)
              @page 23.
 */

#include<iostream>
#include"Sales_item.h"

int main()
{
        Sales_item item1, item2;
        
        std::cin >> item1 >> item2; //read a pair of transactions.
        if(item1.isbn() == item2.isbn())
        {
            std::cout << item1 + item2 << std::endl; // print their sum.
        }
        else
        {
            std::cout << "Data must refer to the same ISBN.\n";
        }
        return 0;
}
