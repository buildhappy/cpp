/*Date    :2015/07/20
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:other vector operations:compute a vector index.
 *Link    :C++ Primer 5th(english version)
              @page 103, $3.3.3 section
 */

#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main()
{
        vector<unsigned> scores(11,0);
        unsigned grade;
        while(cin >> grade)
        {
                if(grade <= 100)
                {
                        scores[grade/10]++;
                }
        }

        //output
        for (auto i : scores)
        {
                cout << i << endl;
        }
        
        return 0;
}

