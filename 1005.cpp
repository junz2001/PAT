#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>  //memset
using namespace std;

bool cmp(int a,int b)  //从大到小排序
{
    return a>b;
}

int main(){
    int num,t;
    cin >> num;
    int m[num];
    int flag[num];  //flag为0表示是关键数字
    memset(flag,0,sizeof(flag));  //使用memset函数对flag数组依次赋相同的初值。注意：对非char类型只能赋0和-1！
    vector<int> keyNum;  //创建向量容器，储存关键数字
    for (int i=0;i<num;i++){
        cin >> m[i];
    }
    for (int i =0;i<num;i++){
        t = m[i];
        while(t != 1)
        {
            if (t % 2 == 0)  //偶数
                t = t / 2;
            else             //奇数
                t = (3 * t + 1) / 2;
            for (int j = 0; j<num;j++)
            {
            if (m[j] == t)
                flag[j] = 1;  // 依次从m[]数组中遍历，查找数列中是否有与t相等的数，如有则该数被覆盖，不是关键数字
            }
        }
    }
    for (int i=0;i<num;i++){
        if (flag[i] == 0) 
            keyNum.push_back(m[i]);  //将关键数字依次添加到容器中
    }
    sort(keyNum.begin(),keyNum.end(),cmp);  // sort快排
    for (int i =0;i<keyNum.size();i++){
        if (i != 0)
            cout << " ";  //第一个数前无空格
        cout << keyNum[i] ;
    }
    return 0;
    }