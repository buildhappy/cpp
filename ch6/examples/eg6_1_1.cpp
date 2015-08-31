/*Date    :2015/08/31
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:simple statements
 *Link    :C++ Primer 5th(english version)
              @page 202, $6.1 section
 */

#include<iostream>
using std::cout;
using std::endl;

//function of factorial
int fact(int val)
{
        int ret = 1;
        while(val > 1)
        {
                ret *= val--;
        }
        return ret;
}

#include<iostream>
int main()
{
        int j = fact(5);
        cout << "factorial of 5 is " << j << endl;
        return 0;
}


