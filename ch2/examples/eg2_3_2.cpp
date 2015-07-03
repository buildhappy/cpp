/*Date    :2015/07/01
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:pointers.
 *Link    :C++ Primer 5th(english version)
              @page 52.$2.3.2 section
 */

#include<iostream>

int main()
{
        //declare
        int *ip1, *ip2;
        double *dp1, *dp2;
        
        //taking the address of object.
        int ival = 42;
        int *pival = &ival;

        double dval;
        double *pd = &dval;
        double *pd2 = pd;
        
        //type error.
        //int *pi = pd;
        //pi = &dval;

        //using a pointer to access an object.
        int ival2 = 43;
        int *p = &ival2;
        std::cout << *p << std::endl;

        //null pointer
       // int *p1 = nullptr;//support g++4.6 or later:c++11
        int *p2 = 0;
        int *p3 = NULL;
        return 0;

}
