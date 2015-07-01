/*Date    :2015/07/01
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:intro to class: add Sales_item.
 *Link    :C++ Primer 5th(english version)
              @page 21.
 */

#include<iostream>
#include"Sales_item.h"

int main()
{
        Sales_item item1, item2;
        
        std::cin >> item1 >> item2; //read a pair of transactions.
        std::cout << item1 + item2 << std::endl; // print their sum.
        return 0;
}
