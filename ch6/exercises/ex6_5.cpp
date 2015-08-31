/*Date    :2015/08/31
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:exercise of section 6.1
 *Link    :C++ Primer 5th(english version)
              @page 204, $6.5
 */

#include<iostream>
using std::cout;
using std::endl;


int abs(int value)
{
    if(value < 0) return -value;
    return value;
}

int main()
{
        int i = abs(5);
        int j = abs(-5);
        int k = abs(0);
        cout << "absolute of 5 is " << i <<endl;
        cout << "absolute of -5 is " << j <<endl;
        cout << "absolute of 0 is " << k <<endl;
}
