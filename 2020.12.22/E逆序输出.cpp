//E��������
#include<iostream>
#include<string>
using namespace std;
int main()
{
	//���ж��ǲ���Ӣ���ַ���һ�����ҵ��ʣ�
	//�ҵ�������������� 
	string num;getline(cin,num);
	int len=num.length();
	int i=0,j,l;
	char temp[100];
	int count=0; 
	for(;i<len;i++)
	{   
	    int k=0;
		//����ĸ ������� 
		while((num[i]>='a'&&num[i]<='z')||(num[i]>='A'&&num[i]<='Z'))
		{
			temp[k]=num[i];k++;i++; 
		}
		//��ʱһ��������k����ĸ 
		 for(j=k-1;j>=0;j--)
		 {
		 	cout<<temp[j];
		 }
		//�����ַ�ֱ����� 
		cout<<num[i];
		 
	}
}
