#include <iostream>
using namespace std;
int main(){
    //sizeof()，是一个运算符（而非函数，虽然它长得很像），类似一个‘+’ ‘-’ ‘*’ ‘/’这样的运算符，参与运算的对象只有括号内的变量
    //这个符号会返回
    bool a1 = true; // bool值的类型只能是true和false，分别对应1,0,是可以隐式转化的（true是1，false是0） 
    int a2;
    char a3;
    long a4; //等价于long int
    float a5;
    double a6;
    long long a7;
    long double a8;
    wchar_t a9;
    cout <<"bool型变量的大小：" <<sizeof() << endl;
    cout <<"int型变量的大小：" <<sizeof() << endl;
    cout <<"char型变量的大小：" <<sizeof() << endl;
    cout <<"w_char型变量的大小：" << sizeof() << endl;
    cout <<"long型变量的大小：" <<sizeof() << endl;
    cout <<"float型变量的大小：" <<sizeof() << endl;
    cout <<"double型变量的大小：" <<sizeof() << endl;
    cout <<"long long型变量的大小：" <<sizeof() << endl;
    cout <<"long double 型变量的大小：" << sizeof() << endl;
    return 0;
}