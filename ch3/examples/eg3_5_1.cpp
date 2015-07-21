/*Date    :2015/07/21
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:Array defination and declare.
 *Link    :C++ Primer 5th(english version)
              @page 113, $3.5 section
 */

#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
        unsigned cnt = 42;
        constexpr unsigned sz = 42;
        int arr[10];
        int *parr[sz];
        string bad[cnt];            //error.
        string strs[get_size()];    //depends get_size() is constexpr or not.

        //explict initializatint array elements,
        const unsigned size = 3;
        int ia1[size] = {0,1,2};
        int a2[] = {0,1,2};
        int a3[5] = {0,2,3};
        strin a4[3] = {"hi" , "bye"};
        int a5[2] = {0,1,2}; //error

        //complicated array declarations
        int *ptrs[10];
        int &ref[10]; //error
        int (*Parray)[10] = &arr;
        int (&arrRef)[10] = arr;

        int *(&arry)[10] = ptrs;
        

        return 0;
}

