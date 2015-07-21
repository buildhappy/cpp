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
        vector<int>::iterator it;
        string::iterator it2;
        vector<int>::const_iterator it3;
        string::const_iterator it4;

        //begin and end operations
        vector<int> v;
        const vector<int> cv;
        auto it1 = v.begin(); //vector<int>::iterator
        auto it22 = cv.begin();//vector<int>::const_iterator
        auto it33 = v.cbegin();//vector<int>::const_iterator

        //
        return 0;
}

