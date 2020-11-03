#include<iostream>
using namespace std;
int main()
{
	double h,m,BMI;//double表示精确小数 
	cout <<"请输入您的身高" << endl;
	cin >> h;
	cout <<"请输入您的体重" << endl;
	cin >> m;
	BMI = m/h/h;
	cout <<"您的BMI是" << BMI;
	if(BMI < 18.5)
	{
		cout << "你真瘦" << endl; 
	}
	else if(BMI < 24.9)
	{
		cout << "正常" << endl;
	}
	else
	{
		cout << "胖" << endl; 
	}
	system("PAUSE");//使用这个语句，可以让程序在没有DEV C++的电脑上运行。 
	  return 0; 
	
	}
