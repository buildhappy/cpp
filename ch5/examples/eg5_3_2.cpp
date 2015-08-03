/*Date    :2015/08/03
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:switch statements
 *Link    :C++ Primer 5th(english version)
              @page 151, $5.3.2 section
 */

#include<iostream>
using std::cout;
using std::cin;
int main()
{
        unsigned aCnt = 0, eCnt = 0, iCnt = 0,
                 oCnt = 0, uCnt = 0;
        char ch;
        while(cin >> ch)
        {
                //if ch is a vowel,increaments the counter.
                switch(ch)
                {
                        case 'a':
                                ++aCnt;
                                break;
                        case 'e':
                                ++eCnt;
                                break;
                        case 'i':
                                ++iCnt;
                                break;
                        case 'o':
                                ++oCnt;
                                break;
                        case 'u':
                                ++uCnt;
                                break;
                }
        }
        cout << "Number of vowel a: \t" << aCnt << "\n";
        cout << "Number of vowel e: \t" << eCnt << "\n";
        cout << "Number of vowel i: \t" << iCnt << "\n";
        cout << "Number of vowel o: \t" << oCnt << "\n";
        cout << "Number of vowel u: \t" << uCnt << "\n";
        return 0;

}


