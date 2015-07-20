/*Date    :2015/07/19
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:vectors define and initialize.
 *Link    :C++ Primer 5th(english version)
              @page 97, $3.3.1 section
 */

#include<iostream>
#include<vector>
#include<string>
#include"../../ch1/examples/Sales_item.h"
using std::string;
using std::vector;
int main()
{
        vector<string> svec;
        vector<int> ivec;
        vector<int> ivec2(ivec);
        vector<int> ivec3 = ivec;
        //vector<string> svec(ivec2); type should the same.

        vector<string> articles = {"a", "an", "the"};
        vector<string> svec1{"a", "an", "the"};
        //vector<string> svec2("a", "an", "the"); //error

        vector<int> iv1(10,1);
        vector<string> sv1(10,"str");

        vector<int> iv2(10);
        vector<string> sv2(10);

        vector<int> v1(10);
        vector<int> v2{10};
        vector<int> v3(10,1);
        vector<int> v4{10,1};

        //vector<string> s1("hi"); //error
        vector<string> s2{"hi"};
        vector<string> s3{10};
        vector<string> s4{10,"hi"};
        return 0;
}
