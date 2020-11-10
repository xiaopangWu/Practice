#include <iostream>
using namespace std;
int main(){
    cout << "请问你是什么年级的" << endl
        << "A   大一        B   大二" << endl
        << "C   大三        D   大四" << endl;
    char input;
    cin >> input;
    switch (input)
    {
    case 'A':
        cout << "您好，四川大学大一学生！";
        break;
    
    case 'B':
        cout << "您好，四川大学大二学生！";
        break;
    case 'C':
        cout << "您好，四川大学大三学生！";
        break;
    case 'D':
        cout << "您好，四川大学大四学生！";
        break;
    default:
        cout << "请您输入正确的结果！";
        break;
    }
    return 0;
}