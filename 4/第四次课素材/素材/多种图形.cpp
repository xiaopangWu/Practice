#include <iostream>
using namespace std;
int main(){

    //例输出一个矩形;
    cout << "输出一个5X5的矩形" << endl;
    for(int i = 0 ; i < 5;i++){
        for(int j = 0 ; j < 5; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n输出一个special的直角三角形"<<endl;
/*
    *
   **
  ***
 ****
*****
*/
    //第一种直观写法
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 - i -1 ; j++){
            cout << " ";
        }
        for(int j = 0 ; j <= i ; j++){
            cout << "*";
        }
        cout << endl;
    }

    //第二种写法
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            if(i+j >= 4){
                cout << "*";
            }
            if(i+j < 4){
                cout << " ";
            }
        }
        cout << endl;
    }

    cout <<"上节课的程序" << endl;
    for(int i = 0 ; i < 7 ; i++)
    {
        if(i % 2 == 0){
            for(int j = 7 - i ; j > 0 ; j--){
                cout << "*";
            }         
        }
        cout << endl;
    }

    //---------下面是练习----------------
/*----------First 目标输出如下--------

    *
   ***
  *****
 *******
*********

------------Second 目标输出如下------------
******
 ******
  ******
   ******
    ******
------------Third 目标输出如下-------------
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
    // first的框架
    // for(int i = 0 ; i < 5 ; i++){
    //     //请补全你的代码
    //     for(){
    //         ;
    //     }
    // }
    // // second的框架
    // for(int i = 0 ; i < 5 ; i++){
    //     //请补全你的代码
    //     for(){
    //         ;
    //     }
    // }
    // // third的框架
    // for(int i = 0 ; i < 9 ; i++){
    //     //请补全你的代码（胆大心细的同学可以尝试只用一个内部的循环实现）
    //     for(){
    //         ;
    //     }

    //     for(){
    //         ;
    //     }
    // }
}