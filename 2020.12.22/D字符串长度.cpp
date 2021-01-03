#include<iostream>
#include<string>
using namespace std;
int main()
{
	string ch;
	getline(cin,ch);
	int count=ch.length();
	cout<<count<<endl;
}
/*#include<stdio.h>
#include<string.h>
int Strlen(char* str)
{
	int count=0;
	if(*str!='\0')
	{
		count++;
		str++;
	 } 
	return count;
}
int main()
{
	int length=count;
	printf("%d",length);
	return 0;
 }*/
