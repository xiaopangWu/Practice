//C������ 
#include<iostream>
using namespace std;
int main()
{
	int n,num1,j;
	while(cin>>n)//numΪ�������� 
	if(n<7||n%2==1){
		cout<<"ERROR\n";
	}
	else 
	{
		for(num1=2;num1<=n/2;num1++)//��0��num/2 
		{
		   int num2 =n-num1;int flag=1;
		   if(num1%2==0||num2%2==0)continue;//Ϊż������ 
		   
		   	for(j=2;j<num1;j++)//�ж����� 
		   	{
		   		if(num1%j==0)
				   {flag=0;break;}//�������� 
				}
			for(j=2;j<num2;j++)//�ж����� 
		   	{
		   		if(num2%j==0)
				{flag=0;break;}//�������� 
				}
		   if (flag==1)cout<<num1<<" "<<num2<<endl;
		 } 
	}
	return 0; 
}
