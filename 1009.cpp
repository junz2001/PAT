#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sentence[80]; // 定义一个长度为80的string类型数组，每一个元素都是string类型，为一个字符串（无 "/0"）。
    int i = 0;
    int wordNum = 0; // 代表单词数
    // 将cin >> 置于while循环条件内，会一直测试输入流一直正常，并且赋值给sentence；
    // 当输入发生错误，或者在按下回车之后检查之前有Ctrl + Z组合键（代表流结束）时，跳出循环。
    while(cin >> sentence[i++]) 
    {
        wordNum++;
        char c = getchar();
        if (c == '\n')  break; 
    }
    for(int i = wordNum - 1; i >= 0; i--){
        cout << sentence[i];
        if (i != 0)  cout << " ";
    }

}