/*Date    :2015/07/24
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:member access operators.
 *Link    :C++ Primer 5th(english version)
              @page 150, $4.6 section
 */

#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cout;
using std::endl;
int main()
{
        string s1 = "a string", *p = &s1;
        auto n = s1.size();
        n = (*p).size();
        n = p->size();

        //error
        n = *p.size();

        return 0;


}


