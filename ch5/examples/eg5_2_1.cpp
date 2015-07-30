/*Date    :2015/07/30
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:statements scope
 *Link    :C++ Primer 5th(english version)
              @page 151, $5.2 section
 */

#include<iostream>
int main()
{
        vector<string> scores = {"F","D","C","B","A","A++"};
        string lettergrade;
        int grade ;
        cin >> grade;
        if (grade < 60)
                lettergrade = scores[0];
        else
                lettergrade = scores[(grade - 50) / 10];

        // nested if 
        if (grade % 10 > 7)
                lettergrade += '+';
        else if (grade % 10 <3)
                lettergrade += '-';

        if (grade < 60)
        {
                lettergrade = scores[0];
        }
        else
        {
                lettergrade = scores[(grade - 50) / 10];
                if (grade % 10 > 7)
                    lettergrade += '+';
                else if (grade % 10 <3)
                    lettergrade += '-';
        }
        return 0;
}


