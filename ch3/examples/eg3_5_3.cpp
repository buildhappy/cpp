/*Date    :2015/07/21
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:pointers and arrays.
 *Link    :C++ Primer 5th(english version)
              @page 117, $3.5.3 section
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
        string num[] = {"one", "two", "three"};
        string *p = &num[0];
        string *p2 = num;

        int ia[] = {1,2,3,4,5,6,7,8,9};
        auto ia2(ia); // ia2 is int* that points the first element.
        ia2  = 42;// error.

	auto ia22(&ia[0]);

        int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int *p = arr;
	++p;

	int *e = &arr[10];
	for (int *b = arr; b != e; ++e)
	{
		cout << *b <<endl;
	}

        return 0;
}

