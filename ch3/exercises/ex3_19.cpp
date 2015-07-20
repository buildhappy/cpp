/*Date    :2015/07/20 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:reading a sequence of ints and store them in a vector.
 *Link    :C++ Primer 5th(english version)
              @page105, ex3_19.
 */

#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main()
{
        vector<int> v;
        int i;
        while(cin >> i)
        {
                v.push_back(i);
        }

        //output the sum of each pair of adjacent elements.
        for (int i = 0; v.size() && i != v.size() -1; i++)
        {
            cout << "sum of v[" << i  << "]: " << v[i] << " and v[" << i+1 << "]: " <<v[i+1] << " = " << v[i] + v[i+1] << endl; 
        }
        return 0;
}
