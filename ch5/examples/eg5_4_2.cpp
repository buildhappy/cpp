/*Date    :2015/08/04
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:iterative statements:while for for_range
 *Link    :C++ Primer 5th(english version)
              @page 151, $5.4.2 section
 */

#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main()
{
        string s = "Hello world!!!";
        for(decltype(s.size()) index = 0; 
            index != s.size() && !isspace(s[index]);
            ++index)
        {
            s[index] = toupper(s[index]);
        }
        cout << s << endl;

        vector<int> ivec;
        for(int i; cin >> i;)
        {
                ivec.push_back(i);
        }
        return 0;
}


