/*Date    :2015/07/01
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:references.
 *Link    :C++ Primer 5th(english version)
              @page 50.$2.3 section
 */

#include<iostream>

int main()
{
        int ival = 1024;
        int &refVal = ival;
        //int &refVal2; //error reference must be initinization.
        std::cout << ival << " " << refVal << std::endl;

        refVal = 2;
        std::cout << ival << " " << refVal << std::endl;

        //reference is alias
        int &refVal1 = refVal;
        int i = refVal;
        std::cout << refVal1 << " " << i << std::endl;

        //reference definitions
        int i1 = 1024, i2 = 2048;
        int &r = i1, r2 = i2;
        int i3 = 1024,&ri = i;
        int &r3 = i3, &r4 = i2;
        r3 = r4;
        return 0;
}
