#include <iostream>
using namespace std;
int main(){
    //sizeof()����һ������������Ǻ�������Ȼ�����ú��񣩣�����һ����+�� ��-�� ��*�� ��/�����������������������Ķ���ֻ�������ڵı���
    //������Ż᷵��
    bool a1 = true; // boolֵ������ֻ����true��false���ֱ��Ӧ1,0,�ǿ�����ʽת���ģ�true��1��false��0�� 
    int a2;
    char a3;
    long a4; //�ȼ���long int
    float a5;
    double a6;
    long long a7;
    long double a8;
    wchar_t a9;
    cout <<"bool�ͱ����Ĵ�С��" <<sizeof() << endl;
    cout <<"int�ͱ����Ĵ�С��" <<sizeof() << endl;
    cout <<"char�ͱ����Ĵ�С��" <<sizeof() << endl;
    cout <<"w_char�ͱ����Ĵ�С��" << sizeof() << endl;
    cout <<"long�ͱ����Ĵ�С��" <<sizeof() << endl;
    cout <<"float�ͱ����Ĵ�С��" <<sizeof() << endl;
    cout <<"double�ͱ����Ĵ�С��" <<sizeof() << endl;
    cout <<"long long�ͱ����Ĵ�С��" <<sizeof() << endl;
    cout <<"long double �ͱ����Ĵ�С��" << sizeof() << endl;
    return 0;
}