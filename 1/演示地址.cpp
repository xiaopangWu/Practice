#include<iostream>
using namespace std;
int main(){
    int a=10;

    int *ptr =NULL;//指针姑且不用，也要初始化为NULL 
    
    cout << ptr << endl;
    *ptr = 16;
    cout << a << endl;

    //请自己编写代码查看double和int之间的转化
    //以及bool和int的转化,非零即一。 
    //并课下自行查阅unsigned这个前缀和int,char的关系。
    //注意，不要混用unsigned int 和 int!!!!
}
