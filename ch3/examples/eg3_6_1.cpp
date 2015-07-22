/*Date    :2015/07/22
 *Author  :zhuyoujun
 *Email   :zhuyoujun0513@163.com
 *Function:multidimensional array.
 *Link    :C++ Primer 5th(english version)
              @page 126, $3.6 section
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
        int ia[3][4];
        int arr[10][20][30] = {0};
        int ia1[3][4] = {
            {0,1,2, 3 },
            {4,5,6, 7 },
            {8,9,10,11}
            };
        int ia2[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
        int ia3[3][4]= {{0},{4},{8}};
        int ia4[3][4]= {0,3,6,9};

        ia[2][3] = arr[0][0][0];
        int (&row)[4] = ia[1];

        constexpr size_t rowCnt = 3, colCnt = 4;
        int ia5[rowCnt][colCnt];
        for (size_t i = 0; i != rowCnt; ++i){
            for (size_t j = 0; j != colCnt; ++j)
            {
                    ia5[i][j] = i*colCnt + j;
            }
        }

        size_t cnt = 0;
        for (auto &row : ia5)
        {
                for (auto &col : row)
                {
                        col = cnt;
                        cnt++;
                }
        }

        return 0;
}

