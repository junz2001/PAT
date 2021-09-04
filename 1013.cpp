#include<bits/stdc++.h>
using namespace std;

#define maxNum = 10000;
// 判断素数
bool judge_prime(int x)
{
    if (x <= 1) return false;           // 自然数0和1不是素数
    for(int i = 2;i <= sqrt(x);i++)     // 如果一个数x能被[2,x平方根]区间内的数整除，则不是素数
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int M = 0,N = 0,pNum = 0,count = 0; // pNum代表素数个数；count代表输出的个数
    cin >> M >> N;
    for(int t = 0; pNum <= N;t++ ){
        if(judge_prime(t)){
            pNum++;
            if (pNum >=M && pNum < N){
                if (count == 0 || (count + 1) % 10 != 0){
                    cout << t << " ";
                    count++;
                }
                else if ((count+1) % 10 == 0 ){
                    cout << t << endl;
                    count++;
                }
                    
            }
            else if (pNum == N)  // 最后一个输出不用空格
                cout << t;
        }
    }
    return 0;
}