/*Date    :2015/08/31
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:local static variables
 *Link    :C++ Primer 5th(english version)
              @page 205, $6.1.2 section
 */

#include<iostream>
using std::cout;
using std::endl;

//function of factorial
size_t count_calls()
{
        static size_t ctr = 0;
        return ++ctr;
}

#include<iostream>
int main()
{
        for(size_t i = 0; i < 10; ++i)
        {
            cout << count_calls() << endl;
        }
        return 0;
}


