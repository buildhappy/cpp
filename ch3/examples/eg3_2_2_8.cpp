/*Date    :2015/07/19
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:compare strings,add two strings.
 *Link    :C++ Primer 5th(english version)
              @page 89, $3.2 section
 */

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
        string str = "Hello";
        string phase = "Hello world";
        string slang = "Hiya";
        bool a = (str < phase);
        cout << "\" "<< str << "\" is less than " << 
                "\" "<< phase << "\" ?" << (str < phase)<<endl;
        cout << "\" "<< phase << "\" is less than " << 
                "\" "<< slang << "\" ?" << (phase < slang)<<endl;

        //add two strings.
        string s1 = "hello, ";
        string s2 = "world\n";
        string s3 = s1 + s2;
        s1 += s2;
        cout << "s1 = " << s1 << endl;
        cout << "s2 = " << s2;
        cout << "s3 = s1 + s2 = " << s3;
        cout << "s1 += s2:  " << s1;

        //add literal and strings
        string str1 = "hello";
        string str2 = "world";
        string str3 = str1 + " " + str2 + '\n';
        

        return 0;
}
