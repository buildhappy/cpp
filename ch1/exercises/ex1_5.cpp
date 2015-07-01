/*Date    :2015/06/25 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:print the prodcut of two input numbers.
 *Link    :C++ Primer 5th(english version)
              @page 9,ex1_5.
 */

#include<iostream>

int main()
{
        std::cout << "Enter two numbers: " << std::endl;
        int v1 = 0, v2 = 0;
        std::cin >> v1 >> v2;
        std::cout << "The product of ";
        std::cout << v1 ;
        std::cout << " and ";
        std::cout << v2 ;
        std::cout << " is "; 
        std::cout << v1 * v2 << std::endl;
        return 0;
}
