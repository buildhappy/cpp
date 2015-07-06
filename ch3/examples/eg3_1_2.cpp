/*Date    :2015/07/06
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:using namespace
 *Link    :C++ Primer 5th(english version)
              @page 83.$3.1 section
 */

#include<iostream>
using std::cin;
using std::cout;using std::endl;

int main()
{
        std::cout << "Enter two numbers:" << endl;
        int v1, v2;
        cin >> v1 >> v2;
        cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;
        return 0;
}
