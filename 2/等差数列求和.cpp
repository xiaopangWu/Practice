#include <iostream>
using namespace std;
int main()
{
    int start, end, difference;
    cout << "���";
    cin >> start;
    cout << "ĩ�";
    cin >> end;
    cout << "���";
    cin >> difference;
    //��һ�ֽⷨ
    int sum = 0;
	//for ���
	for(int i=1;i<=100;i++)
	{
		sum=sum+i;
	}
	//��������λ�ò�����Ĵ��� 
    cout << "�Ȳ��������Ϊ��" << sum << endl;
    return 0;
}
