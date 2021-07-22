// 解法一：使用sort()函数对结构体数组快排
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
    sort(s,s+num,cmp);  //使用sort函数排序，第一个参数是起始地址，第二个是结束地址，最后一个是自定义的排序函数。
                          //s是结构体数组，数组名表示首元素地址，最后一个元素的地址为数组名+length。
    cout << s[0].name << " " << s[0].id << endl;
    cout << s[num-1].name << " " << s[num-1].id << endl;
    return 0;    
}


/*  解法二：迭代结构体对象，比较max、min更新结构体对象 
#include <iostream>
#include <string>
using namespace std;

struct Student  //定义结构体
{
    string name,id;
    int mark;
};


int main(){
    Student s , max{"","",0} , min{"","",100};
    int num = 0;
    cin >> num; 
    while(num--){  //首先判断num的值，当大于零时进入循环，并且num自减1,当num=0时跳出
        cin >> s.name >> s.id >> s.mark;  //cin读入时以空格" "分割字符串,分别传给结构体对象的三个变量
        max = s.mark > max.mark ? s : max;  //判断最大值，若大于当前max，则将当前s复制给max
        min = s.mark < min.mark ? s : min;

    }
    cout << max.name << " " << max.id << endl;
    cout << min.name << " " << min.id << endl;
    return 0;
}
*/