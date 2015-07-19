/*Date    :2015/07/19
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:process chars in strings..
 *Link    :C++ Primer 5th(english version)
              @page 92, $3.2.3 section
 */

#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

int main()
{
        string str = "Hello World!!!";
        string::size_type punct_cnt = 0;
        /*support by gcc 4.6 or later
        for (auto c : str)
        {
                if(ispunct(c))
                {
                     punct_cnt++;
                }
        }
        */
        
        for (int i = 0;str.size() && i < str.size(); i++)
        {
                if(ispunct(str[i]))
                {
                     punct_cnt++;
                }
        }
        cout << punct_cnt << " punctuation characters in " << str << endl;
        return 0;
}
