/*----------First 目标输出如下--------

    *
   ***
  *****
 *******
*********               */
#include<iostream>
using namespace std;
int main(){
	cout << "输出三角形" << endl;
	for(int i=0;i<5;i++){
       for(int j=0;j<5-i-1;j++){
       	cout << " ";
	   }
	   for(int j=0;j<2*i+1;j++){
	   	cout << "*";
	   }
	   cout << endl;	
	} return 0;
} 
