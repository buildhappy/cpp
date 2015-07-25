/*Date    :2015/07/23
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:assignment operators.
 *Link    :C++ Primer 5th(english version)
              @page 143, $4.4 section
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
        int i = 0, j = 0, k = 0;
        const int ci = i;
        
        //error
        1024 = k;
        i + j = k;
        ci = k;

        //
        k = 0;
        k = 3.1415926; //warning

        k = {3.14}; //error
        vector<int> vi;
        vi = {0,1,2,3,4,5,6,7,8,9};

        int ival,jval;
        ival = jval = 0;
        int ival, *pval;
        ival = pval = 0; //error

        string s1, s2;
        s1 = s2 = "OK";

        int i = get_value();
        while (i != 42)
        {
                i = get_value();
        }

        int j;
        while ((j = get_value()) != 42)
        {
                //do sth
        }
        
        if (i = j){
        }

        if (i == j){
        }

        int sum = 0;
        for (int val = 1; val != 10; val++)
        {
                sum += val;
        }

        return 0;
}


