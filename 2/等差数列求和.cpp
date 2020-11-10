#include <iostream>
using namespace std;
int main()
{
    int start, end, difference;
    cout << "首项：";
    cin >> start;
    cout << "末项：";
    cin >> end;
    cout << "公差：";
    cin >> difference;
    //第一种解法
    int sum = 0;
	//for 语句
	for(int i=1;i<=100;i++)
	{
		sum=sum+i;
	}
	//请在以上位置补充你的代码 
    cout << "等差数列求和为：" << sum << endl;
    return 0;
}
