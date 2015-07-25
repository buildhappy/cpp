/*Date    :2015/07/24
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:conditional operators.
 *Link    :C++ Primer 5th(english version)
              @page 151, $4.7 section
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
        int grade;
        string finalgrade = (grade < 60) ? "fail" : "pass";
        finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "faile" : "pass";

        cout << ((grade < 60) ? "fail" : "pass");
        cout << (grade < 60) ? "fail" : "pass"; //logic error
        cout << grade < 60 ? "fail" : "pass"; //synatx rror 


        return 0;
}


