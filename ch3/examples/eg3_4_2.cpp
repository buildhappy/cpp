/*Date    :2015/07/21
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:intro to iterators.
 *Link    :C++ Primer 5th(english version)
              @page 108, $3.3.4 section
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
        bool find_or_not = false;
        string target;
        vector<string> text;
        auto beg = text.begin(), end = text.end();
        auto mid = beg + (end - beg) / 2;
        while(mid != end && beg <= end)
        {
                if ((*mid) < target)
                {
                        beg = mid + 1;
                }
                else if ((*mid) > target)
                {
                        end = mid;
                }
                else
                {
                        find_or_not = true;
                }
        }



        return 0;
}

