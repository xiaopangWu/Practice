//E
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;
int main()
{
	//n��ѧ�� ���� ���֤�� �ɼ�  ���� 
	int n; int i;int j;int m;char search[30];
	cin>>n>>search; getchar();
	char name[n+1][10];char sfz[n+1][20];
	int score[n+1]; char rank[n+1][10];
	//���Ƶ����� ����гɼ���ѧ�� 
	char copyname[n+1][10];char copysfz[n+1][20];
	int copyscore[n+1];
	
	int temp;char temp1[1][10];char temp2[1][10];
	 
	char ch[1][10];//�ݴ�ɼ� 
	char ch0[1][10];//�ݴ����� 
	//���� 
	for(i = 0;i < n;i++)
	{
	
		cin>>name[i]>>sfz[i]>>ch[1];
		
//		cout<<"ch="<<ch[1]<<"\n";
	    if(strcmp(ch[1],"n/a") == 0)//û�гɼ�Ϊn/a 
		{
	    score[i]=666;
		}
		else{
			sscanf(ch[1],"%d",&score[i]);
//	    score[i]=atoi(ch[1]) ;//ǿ��ת������ ���� atoi 
		}
//		cout<<"score="<<score[i]<<endl;
	  
	}
	    j = 0;
		m = n;
	for(i=0;i < n;i++)
	{
		if (score[i] == 666)	//û�ɼ������ʼ���Ŵ� 
		{//û�ɼ�������
		strcpy(copyname[m-1],name[i]);
		strcpy(copysfz[m-1],sfz[i]);
		copyscore[m-1] = score[i];
		strcpy(rank[m-1],"n/a");
		m--;					//��� m���� �гɼ���ѧ���ĸ��� 
		}
		else
		{
		strcpy(copyname[j],name[i]);
		strcpy(copysfz[j],sfz[i]);
		copyscore[j] = score[i];  
	
		j++;
		} 
		
	 }  
	//ð������ �Ӹߵ���  �����гɼ������� 
	for(i = 0 ;i < m-1 ;i++)//�Ƚ�m-1��
	{
        for (int k = 0; k<m-i-1; k++)  //ÿ�ֱȽ�m-1-i��,
    {
          
			if (copyscore[k] < copyscore[k+1]) //�Ӵ�С
            {
       			//score
                temp = copyscore[k];
                copyscore[k] = copyscore[k+1];
                copyscore[k+1] = temp;
        	    //name
                strcpy(temp1[0] ,copyname[k]);
                strcpy(copyname[k],copyname[k+1]);
                strcpy(copyname[k+1] , temp1[0]);
                //sfz
                strcpy(temp2[0] ,copysfz[k]);
                strcpy(copysfz[k],copysfz[k+1]);
                strcpy(copysfz[k+1] , temp2[0]); 
            }
        }
	 } 
	 
	for(i = 0;i < m ;i++)
	{//�гɼ�����  ǿ��ת��Ϊ�ַ���
	sprintf(rank[i],"%d",i+1); 
	}
	
	for(i = 0;i < m ;i++)//�ɼ���ͬ 
	{
		for(j = 1;j<m;j++) 
		{
			if(copyscore[i]==copyscore[j])
			{
				strcpy(rank[j],rank[i]);
			}
		}
	}
	   //���� 
   int truth[n]={0}; char temp3[1][10];//�ݴ�ÿ��ѧ���ɼ� 
   for (i = 0; i < n; i++)
   { 
   	  sprintf(temp3[0],"%d",copyscore[i]);
      if (strstr(copyname[i], search) != NULL || strstr(copysfz[i], search) != NULL) 
         {
         	truth[i] = 1;
		 }
     
      if (strcmp(search,temp3[0]) == 0) 
	  	{
	  	truth[i] = 1;
	  	}
   }

   for (i = 0; i< n; i++)
   {
      if (truth[i])
      {
         if (copyscore[i]==666)// û�ɼ� 
            {
            printf("%s %s n/a %s\n", copyname[i], copysfz[i], rank[i]);
			}
         else
            printf("%s %s %d %s\n", copyname[i], copysfz[i], copyscore[i], rank[i]);
      }
   }
   
//	for(i = 0;i < n;i++)//���������ѧ�� 
//	{
//	 cout<<copyname[i]<<" "<<copysfz[i]<<" "<<copyscore[i]<<" "<<rank[i]<<endl;
//	} 
	return 0;
 }
