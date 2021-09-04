#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    // 给定区间是 [−2​^31​​,2^​31​​] ,A和B的和可能会超过范围，int的范围是4个字节，值范围是[−2​^31​​,2^​31​​]，用long long 占8字节
    long long a,b,c;    
    cin >> num;
    bool flag[num];
    for(int i =0; i < num; i++){
        cin >> a >> b >> c;
        if (a + b > c)
            flag[i] = true;
        else
            flag[i] = false;
    }
    for(int i = 0; i < num; i++){
        if (flag[i] == true)
            cout << "Case #" << i+1 << ": " << "true" << endl;  // 直接cout bool类型会输出1或者0
        else
            cout << "Case #" << i+1 << ": " << "false" << endl;
    }
    return 0;
}