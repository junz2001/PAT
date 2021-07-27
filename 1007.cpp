// 欧式筛法，优化了埃氏筛法的计算冗余
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int count = 0;  // 素数个数
    int flag[num];  // flag = 1表示为素数，先假设全部为素数
    vector <int> Prime;  // 存放素数
    for(int i = 0;i<num;i++)
    {
        flag[i] = 1;
    }
    flag[0] = 0;  // 0和1不是素数
    flag[1] = 0;
    for(int i=2;i<=num;i++)
    {
        if (flag[i] == 1)
        {
            Prime.push_back(i); // flag=1先存放到prime
            count++;
        }
        for(int j = 0;j < count && i * Prime[j] <= num;j++)  // 将i与prime中的素数依次相乘，得到的数如果<num，则得到的数为合数
        {
            flag[i * Prime[j]] =0;  
            if (i % Prime[j] == 0)  // 此时，下一个i* prime[i+1] 这个合数的最小质因子不是当前的i，跳出循环
                break;
        }
    }
    int primePair = 0;  // 素数对个数
    for (int i = 1;i < count;i++)
    {
        if (Prime[i] - Prime[i-1] == 2)
            primePair++;
    }
    cout << primePair;
    return 0;
}



/*埃氏筛法
#include <iostream>
#include <vector>
using namespace std;
 int main()
 {
    int num;
    int count = 0;
    cin >> num;
    int flag[num];
    vector <int> Prime;
    for(int i = 0;i<num;i++)
    {
        flag[i] = 1;
    }
    flag[0] = 0;
    flag[1] = 0;
    for (int i = 2;i <= num;i++)
    {
        if (flag[i] == 1
        {
            Prime.push_back(i);
            count++;
        }
        for (int j = 2 * i;j <= num;j+=i)
            flag[j] = 0;
    }
    int primePair = 0;  // 素数对个数
    for (int i = 1;i < count;i++)
    {
        if (Prime[i] - Prime[i-1] == 2)
            primePair++;
    }
    cout << primePair;
    return 0;
 }
*/




