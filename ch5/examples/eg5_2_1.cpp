/*Date    :2015/07/30
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:statements scope
 *Link    :C++ Primer 5th(english version)
              @page 151, $5.2 section
 */

#include<iostream>
int main()
{
        while (int i = get_num()) 
                cout << i << endl;
        i = 0; //error.

        auto beg = v.begin();
        while (beg != v.end() && *beg > 0)
                ++beg;
        if (beg == v.end())
                //we know that all elements in v are >= 0;
        return 0;
}

