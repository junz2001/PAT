#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int sum = 0;
    string str[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    for (int i = 0; i < s.length(); i++)
        sum += (s[i] - '0');
    string num = to_string(sum);
    for (int i = 0; i < num.length(); i++) {
        if (i != 0) cout << " ";
        cout << str[num[i] - '0'];
    }
    return 0;
}

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

struct Student  //定义结构体
{
    string name,id;
    int mark;
};

bool cmp(Student X,Student Y)  //定义排序比较函数
{  
    return X.mark > Y.mark;//返回x>y，意思是当输入两个元素的时候，大的在前。(这里x>y和x>=y没有本质区别) 
    //反之，如果是<号的话，就是小的在前，但是那样就没意义了。sort（）默认是从小到大。
}

int main(){
    int num =0;
    cin >> num;
    Student s[num];
    for(int i=0;i<num;i++)
        cin >> s[i].name >> s[i].id >> s[i].mark;
    sort(s,s+num-1,cmp);  //使用sort函数排序，第一个参数是起始地址，第二个是结束地址，最后一个是自定义的排序函数。
                          //s是结构体数组，数组名表示首元素地址，下标是从0开始，所以最后一个是num-1。
    cout << s[0].name << " " << s[0].id;
    cout << s[num-1].name << " " << s[num-1].id;
    return 0;    
}