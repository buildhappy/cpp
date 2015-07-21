/*Date    :2015/07/21
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:access array elements.
 *Link    :C++ Primer 5th(english version)
              @page 116, $3.5.2 section
 */

#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
        unsigned scores[11] = {};
        unsigned grade;
        while(cin >> grade)
        {
                scores[grade/10]++;
        }

        for(auto i:scores)
        {
                cout << i << endl;
        }
        return 0;
}

