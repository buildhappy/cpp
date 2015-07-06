/*Date    :2015/07/06
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:using namespace
 *Link    :C++ Primer 5th(english version)
              @page 82.$3.1 section
 */

#include<iostream>
using std::cin;

int main()
{
        int i;
        cin >> i;
        cout << i;     //error
        std::cout << i;
        return 0;
}
