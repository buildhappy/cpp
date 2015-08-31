/*Date    :2015/08/31
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:exercise of section 6.1
 *Link    :C++ Primer 5th(english version)
              @page 204, $6.5
 */

#include<iostream>
using std::cin;
using std::cout;
using std::endl;


int fact(int value)
{
    int ret = 1;
    while (value > 1)
    {
            ret *= value--;
    }
    return ret;
}

int main()
{
        int value;
        cout << "Enter a positive number:" <<endl;
        cin >> value;
        int result = fact(value);
        cout << "absolute of " << value << " is " << result <<endl;
        return 0;
}
