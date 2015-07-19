/*Date    :2015/07/19
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:acesss chars in string.
 *Link    :C++ Primer 5th(english version)
              @page 91, $3.2 section
 */

#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

int main()
{
        string str = "some string";
        /*support by gcc 4.6 or later
        for (char c : str)
        {
                cout << c << endl;
        }
        */
        
        for (int i = 0;str.size() && i < str.size(); i++)
        {
                cout << str[i] <<endl;
        }

        return 0;
}
