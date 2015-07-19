/*Date    :2015/07/19
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:process chars in strings..
 *Link    :C++ Primer 5th(english version)
              @page 93, $3.2.3 section
 */

#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

int main()
{
        string str = "Hello World!!!";
        /*support by gcc 4.6 or later
        for (auto &c : str)
        {
            c = toupper(c);
        }
        */
        
        for (int i = 0;str.size() && i < str.size(); i++)
        {
                str[i] = toupper(str[i]);
        }
        cout <<  str << endl;
        return 0;
}
