#include <iostream>
using namespace std;
int main(){
    cout << "��������ʲô�꼶��" << endl
        << "A   ��һ        B   ���" << endl
        << "C   ����        D   ����" << endl;
    char input;
    cin >> input;
    switch (input)
    {
    case 'A':
        cout << "���ã��Ĵ���ѧ��һѧ����";
        break;
    
    case 'B':
        cout << "���ã��Ĵ���ѧ���ѧ����";
        break;
    case 'C':
        cout << "���ã��Ĵ���ѧ����ѧ����";
        break;
    case 'D':
        cout << "���ã��Ĵ���ѧ����ѧ����";
        break;
    default:
        cout << "����������ȷ�Ľ����";
        break;
    }
    return 0;
}