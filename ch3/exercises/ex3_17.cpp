/*Date    :2015/07/19 
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:reading a sequence of words from standard input and store them in vectors.
           and process them into upppercase, print them and 8 words a line.
 *Link    :C++ Primer 5th(english version)
             @page105, ex3_17.
 */

#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
        string word;
        vector<string> text;
        while (cin >> word)
        {
                text.push_back(word);
        }

        for (auto &str : text)
        {
                for (auto &c : str)
                {
                    c = toupper(c);
                }
        }

        for (int i = 0; i != text.size(); i++)
        {
            cout << text[i] << "\t";
            if (i%8 == 7)
            {
                cout << endl;
            }
        }
        cout << endl;
        return 0;
}
