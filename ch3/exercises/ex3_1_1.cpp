/*Date    :2015/07/6
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:using while loop and namespace: sum 50 to 100 incursive.
 *Link    :C++ Primer 5th(english version)
              @page 11, ex1_9 and @page83, ex3_1.
 */

#include<iostream>
using std::cout;
using std::endl;

int main()
{
        int sum = 0, val = 50;
        while (val <= 100)
        {
            sum += val;
            ++val;
        }
        cout << "The sum of 50 to 100 incursive is " << sum << endl; 
        return 0;
}
