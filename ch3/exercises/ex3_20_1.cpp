/*Date    :2015/07/20 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:reading a sequence of ints and store them in a vector,
 *Link    :C++ Primer 5th(english version)
              @page105, ex3_20.
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

        //output the sum of the first and last element,then the second and the last second elements, and so on.
        for (int i = 0, j = v.size() - 1; i <= j; i++,j--)
        {
                cout << "sum of v[" << i  << "]: " << v[i] << " and v[" << j << "]: " <<v[j] << " is " << v[i] + v[j] << endl; 
        }
        return 0;
}
