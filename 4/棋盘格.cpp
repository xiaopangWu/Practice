#include<iostream>//��Ĵ��룬ֻ��һ���ӣ�������һ��λ�ñ��@ 
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
		cout <<"��ӭʹ��С������"<< endl;
		cout <<"1.�������"<< endl;
		cout <<"2.�������"<< endl;
		cout <<"3.���������˳�"<< endl;
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
