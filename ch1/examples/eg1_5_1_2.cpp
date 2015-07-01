/*Date    :2015/06/28 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:intro to class: input and output.
 *Link    :C++ Primer 5th(english version)
              @page 20.
 */

#include<iostream>
#include"Sales_item.h"

int main()
{
        Sales_item book;
        //read ISBN,number of copies sold,and sales price.
        std::cin >> book;
        //write ISBN, number of copies sold,total revenue,and average price
        std::cout << book << std::endl;
        return 0;
}
