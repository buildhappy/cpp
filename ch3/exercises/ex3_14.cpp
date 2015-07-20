/*Date    :2015/07/19 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:reading a sequence ints from standard input and store them in vectors.
 *Link    :C++ Primer 5th(english version)
              @page102, ex3_14.
 */

#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::string;
using std::vector;
int main()
{
        int number;
        vector<int> ivec;
        while (cin >> number)
        {
                ivec.push_back(number);
        }
        return 0;
}
