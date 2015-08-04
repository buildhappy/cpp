/*Date    :2015/08/04
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:iterative statements:while for for_range
 *Link    :C++ Primer 5th(english version)
              @page 151, $5.4.1 section
 */

#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	vector<int> ivec;
	int i;
	while(cin >> i)
	{
		ivec.push_back(i);
	}
	auto beg = ivec.begin();
	while (beg != ivec.end() && *beg >= 0)
	{
		++beg;
	}
	if (beg == ivec.end())
	{
		cout << "The elements in ivec are all >=0." << endl;
	}
	return 0;
}


