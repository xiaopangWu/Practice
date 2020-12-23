#include<iostream>
using namespace std;
int main()
{
	int nums=7;
	for(int i=0;i<7;i++){
	  	if(i%2==1){
	  		cout<<endl;
	  		continue;
		  }
		for(int j=0;j<nums-i;j++){
			cout<<"*";
		}  cout<< endl;
	}return 0;
} 
