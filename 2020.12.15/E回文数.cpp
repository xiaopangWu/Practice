//Eͳ�ƻ�����
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
//?��ô����һ���ı�
 
using namespace std;
int main()
{
    char str[1000]={};long long int x=0,s=0;
	long long int p,q,r=0,i,j,count=0,a[100]={0};//�������
	long long int hws[100]={0};//��Ż����� 
	
	 
	while((str[x]=getchar())!=EOF)
	     {x++;}
//	cout<<"str="<<str<<endl;
	//��ȡ����  ��������Ϊ2 �Ҳ���0��ͷ
	while(1)
	{
		while(str[r]&&(str[r]<'0'||str[r]>'9'))

		{r++;}//���������� 
	
	if(str[r])
	{
		p=r;q=r+1;//pΪ���ֿ�ͷ��qѰ�����ֽ�β 
		a[count]=str[r]-'0';
		
		while(str[q]>='0'&&str[q]<='9')
		{
			a[count] = 10*a[count]+(str[q]-'0');
			
			q++;
		}
		//cout<<"q="<<q<<endl; 
		if(str[r]==0||q==r+1)//������Ҫ���������0���ǵ� 
		{
			a[count] = 0;
		}
		
		r = q;//����� 
		count++;//���Ӹ���
	}
	else break;
	}
		
//		for(i=0;i<count;i++)
//	{	cout<<"a["<<i<<"]="<<a[i]<<endl;}////////
	
	 //�жϻ�����  
//	cout<<"count="<<count<<endl;
//��Ż�������������±� 
    int n=0;
	for(i=0;i<count;i++)
	{ 
//	  cout<<"a["<<i<<"]="<<a[i]<<endl;
	
		x=0,s=a[i];//��ÿλ�ϵ���������������� 
		if (a[i]==0)continue;
		while(s>0)
		{
			x=x*10+s%10;
			s=s/10;
		}
//		cout<<"x="<<x<<endl;//
			if(x==a[i]){ hws[n]=a[i];n++; } 
	
	 } 
	 
	 if(n==0){
	 	cout<<"None"<<endl;
	 	exit(0);
	 }
	 int ci[n];//ͳ�ƴ��� 
	 for(i=0;i<n;i++)
	 {
	 	ci[i]=1;
	 }
	 //�жϻ��������ִ��� ////����0���� 
	 for(i=0;i<n;i++)
	 {
	 	if (hws[i]==0){continue;
	 	}
	 	for(j=i+1;j<n;j++)
	 	{
	 	    if(hws[j]==0){continue;
			 } 
	 			if(hws[i]==hws[j])
	 			{
	 				ci[i]++;
	 				hws[j]=0;//���ظ���������Ϊ0�������ظ� 
//	 				cout<<"ci["<<i<<"]="<<ci[i]<<endl; ////////
				 }
			 
		 }
	  } 
	  //������ִ������Ļ����� 
	  //�ҳ��������Ƕ��� 
	  int MAX=ci[0]; int m=0;
	  for(i=0;i<n-1;i++)
	  {
	  	if(MAX<ci[i+1])
	  	{
	  	   MAX=ci[i+1];
		  }
	   } 
//	   cout<<"MAX="<<MAX<<endl;
	   int result[30]={0};
	   for(i=0;i<n;i++)
	   { 
	    if(ci[i]==MAX)
	   	{
	   		result[m]=hws[i];m++;
			} 
	   }
	   //ð������
	//���ѭ������ ���� 
	for(i = 0;i<30-i;i++)
	{
		//�ڲ�ѭ������ ÿ�ֵıȽϴ��� 
		for(int c=0;c<30-i-1;c++)
		{
		
		if ((result[c] > result[c+1])&&result[c]!=0&&result[c+1]!=0)
		{
			int temp=result[c];
			result[c]=result[c+1];
			result[c+1]=temp;	
		}
		
		}
	}
	for(i = 0;i<30;i++)
	{
		if(result[i]==0)break;
		cout<<result[i]<<" "<<MAX<<endl; 
	}
	cout<<endl;
	 
	  
	 
	
	return 0 ;
 } 
