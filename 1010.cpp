#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b == 0)
        cout << "0 0";  // 如果输入的第一项的系数就为0，那么导数多项式为零多项式，输出"0 0"
    else 
        cout << a * b << " " << b - 1;
    while (cin >> a >> b )
    {
        if (b != 0)     
            cout << " " << a * b << " " << b - 1;
        char c = getchar();
        if (c == '\n')
            break;  // 检查到a，b的下一个字符为回车时，停止循环输入
    }
    return 0;
}