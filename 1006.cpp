#include <iostream>
using namespace std;

int main ()
{
    int inNum,bNum,sNum,gNum;
    cin >> inNum;
    bNum = inNum / 100;
    sNum = (inNum%100) / 10;
    gNum = (inNum%100)%10;
    for (int i=0;i<bNum;i++)
        cout << "B" ;
    for (int i=0;i<sNum;i++)
        cout << "S" ;
    for (int i=1;i<=gNum;i++)
        cout << i ;
    return 0;
}