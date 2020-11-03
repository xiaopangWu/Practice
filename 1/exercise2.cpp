#include<iostream>

int main(){
    double a = 3.14;//char后面单引号 
    double b =(int) a;

    int c = 98;
    char d = c;
    std::cout <<"输出了char = ‘a’ 到int的值："<< b << std::endl;
    std::cout <<"输出了int = 98 到 char的值：" <<d << std::endl;

    //请自己编写代码查看double和int之间的转化
    //以及bool和int的转化,非零即一。 
    //并课下自行查阅unsigned这个前缀和int,char的关系。
    //注意，不要混用unsigned int 和 int!!!!
}
