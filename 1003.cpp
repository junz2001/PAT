#include <iostream>
#include<string>
using namespace std;

bool judge(string s){
    string pat_str = "PAT";
    int pNum=0,aNum=0,tNum=0;//P、A、T三个字符的数量
    int la=0,lb=0,lc=0;
    for(int i=0;i<s.length();i++){
        if (pat_str.find(s[i]) == (string::npos)) //string:npos是一个常数，表示不存在。
            return false;
        switch (s[i]) //s[i]为字符类型，用''表示，实际上为整形。
        {
        case 'P'://case后不能是字符串类型
            pNum++;
            break;
        case 'A':
            aNum++;
            break;
        case 'T':
            tNum++;
            break;
        default:
            break;
        }
    }
    if ((pNum != 1) || (tNum !=1) || (aNum < 1)) //P、T的字符个数只能是1,A至少要有一个
        return false;
    la = s.find("P");
    lb = s.find("T") - la - 1;
    lc = s.length() - s.find("T") - 1;
    if (s.find("T") - s.find("P") == 1) //P和T之间必须要有A
        return false;
    if (la*lb == lc) //判断条件，length（a）*length(b) = length(c)
        return true;
    else 
        return false;

}

int main(){
    int num  = 0;
    bool result ;
    string s;
    cin >> num;
    for (int i=0;i<num;i++){
        cin >> s;
        result = judge(s);
        if (result == true)
            cout << "YES" << endl;
        if (result == false)
            cout << "NO" << endl;
    }
    return 0;
}