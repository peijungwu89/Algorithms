#include <iostream>
using namespace std;

const int mx = 20;


int main(int argc, char** argv) {
	
	int front, rear, val, queue[mx]={0};
	char ch;
	front = rear =- 1;
	
	while(ch != 'E' && rear < mx-1){
		cout<<"輸入[I]存入一值 [G]取出一值 [E]結束離開: ";
		cin>>ch;
		
		switch(ch){
			
			case 'I':
				cout<<"請輸入一數值: ";
				cin>>val;
				rear++;
				queue[rear] = val;
				
			break;
			
			case 'G':
				if (rear > front){
					front++;
					cout<<"目前佇列["<<queue[front]<<"]";
					cout<<endl;
					queue[front] = 0;
				}else{
					cout<<"目前佇列已空!"<<endl;
					exit(0);
				}
					 
			break;
			
			case 'E':
				cout<<"離開系統"<<endl;
			break;
			
			default:
				cout<<"輸入錯誤請重新輸入！！"<<endl;
			break;
		}
	}
	cout<<"目前佇列資料:";
	if(front >= rear){
			
		cout<<"[目前佇列已空!]"<<endl;
	
	}else{
		while(rear > front){
				
			front++;
			cout<<"["<<queue[front]<<"]"<<endl;
		}
			
	}
	
	return 0;
}
