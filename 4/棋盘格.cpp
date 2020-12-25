#include<iostream>//你的代码，只下一个子，让其中一个位置变成@ 
using namespace std;
int main(){
	char board[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			board[i][j]='#';
		}
	}
	int flag=1;
	while (flag){
		cout <<"欢迎使用小胖棋盘"<< endl;
		cout <<"1.输入黑棋"<< endl;
		cout <<"2.输入白棋"<< endl;
		cout <<"3.输出结果，退出"<< endl;
		cin >> flag;
		
	        int x,y;
	        cin >> x >> y;
	        
	        
	        board[x-1][y-1]='@'; 
	        for(int i=0;i<10;i++){
		     for(int j=0;j<10;j++){
			    cout << board[i][j]<<" ";
		} cout << endl;
	}	
	
	
}
}
