#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    //��������Ĵ����в�ȫ��ʹ��������abcdef������yz
    char mystr[50] = {0};
    for(int i = 0 ; i < 26 ; i++){
        mystr[i] ='a'+ i ;
    }
    cout << mystr;
}
