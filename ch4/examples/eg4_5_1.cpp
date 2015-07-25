/*Date    :2015/07/24
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:increament and decrement operators.
 *Link    :C++ Primer 5th(english version)
              @page 147, $4.5 section
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
        int i = 0, j;
        j = ++i;
        j = i++;

        vector<int> v;
        auto pbeg = v.begin();
        while (pbeg != v.end() && *pbeg >=0 )
        {
                cout << *pbeg++ << endl;
        }


        return 0;


}


