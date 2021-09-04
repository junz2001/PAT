#include<bits/stdc++.h>
using namespace std;

// 数组指定下标片段逆序操作
void myReverse(int *array,int id_start,int id_end)
{
    int median = (id_start + id_end + 1) / 2;  // 取中位数
    for(int i = id_start; i < median; i++){  // 交换
        int t = array[i];
        array[i] = array[id_start + id_end - i];
        array[id_start + id_end - i] = t; 
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int *a = new int[m];  // 申请动态数组存放原数组
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    m = m % n;  // 关键点：作用是指进行一个周期的移动，当m > n时，例如n=6，m=8就平移 8%6=2 个位置，而不能移动8个位置
    // 思路：左边逆序，右边逆序，再整体逆序
    myReverse(a,0,n-1-m);
    myReverse(a,n-m,n-1);
    myReverse(a,0,n-1);
    for(int i = 0;i < n; i++){
        if (i != 0)
            cout << " ";
        cout << a[i];
    }
    return 0;
}