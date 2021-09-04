#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 0;
    int A1 = 0,A2 = 0,A3 = 0,A4 = 0,A5 = 0;
    int cnt1 = 0,cnt2 = 0,cnt3 = 0,cnt4 = 0,cnt5 = 0;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        int t;
        cin >> t;
        switch (t % 5)
        {
        case 0:
            if (t % 2 == 0) {
                cnt1++;
                A1+=t;
            }
            break;
        case 1:
            cnt2++;
            A2 += ((cnt2 % 2 == 0) ? -t : t);
            break;
        case 2:
            A3++;
            cnt3++;
            break;
        case 3:
            A4+=t;
            cnt4++;
            break;
        case 4:
            A5 = max(t,A5);
            cnt5++;
            break;
        default:
            break;
        }
    }
    // 输出结果
    cnt1 == 0 ? (cout << "N ") : (cout << A1 << " ");
    cnt2 == 0 ? (cout << "N ") : (cout << A2 << " ");
    cnt3 == 0 ? (cout << "N ") : (cout << A3 << " ");
    cnt4 == 0 ? (cout << "N ") : (cout << setiosflags(ios::fixed) << setprecision(1) << static_cast<double>(A4) / cnt4 << " ");  // 需要头文件#include <iomanip>
    cnt5 == 5 ? (cout << "N ") : (cout << A5);
    return 0;

}