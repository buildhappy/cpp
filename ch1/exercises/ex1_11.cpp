/*Date    :2015/06/25 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:using while loop and enter 2 numbers,
            print each number in the range specified by these 2 numbers.
 *Link    :C++ Primer 5th(english version)
              @page 13,ex1_11.
 */

#include<iostream>

int main()
{
        int v1 = 0, v2 = 0;
        std::cin >> v1 >> v2;
        if (v1 > v2)
        {
            int temp = v2;
            v2 = v1;
            v1 = temp;
        }
        while (v1 <= v2)
        {
            std::cout << v1 << std::endl;
            ++v1;
        }
        return 0;
}
