#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    //请在下面的代码中补全，使其可以输出abcdef。。。yz
    char mystr[50] = {0};
    for(int i = 0 ; i < 26 ; i++){
        mystr[i] ='a'+ i ;
    }
    cout << mystr;
}
