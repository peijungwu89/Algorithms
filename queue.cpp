#include <iostream>
using namespace std;

const int mx = 20;


int main(int argc, char** argv) {
	
	int front, rear, val, queue[mx]={0};
	char ch;
	front = rear =- 1;
	
	while(ch != 'E' && rear < mx-1){
		cout<<"��J[I]�s�J�@�� [G]���X�@�� [E]�������}: ";
		cin>>ch;
		
		switch(ch){
			
			case 'I':
				cout<<"�п�J�@�ƭ�: ";
				cin>>val;
				rear++;
				queue[rear] = val;
				
			break;
			
			case 'G':
				if (rear > front){
					front++;
					cout<<"�ثe��C["<<queue[front]<<"]";
					cout<<endl;
					queue[front] = 0;
				}else{
					cout<<"�ثe��C�w��!"<<endl;
					exit(0);
				}
					 
			break;
			
			case 'E':
				cout<<"���}�t��"<<endl;
			break;
			
			default:
				cout<<"��J���~�Э��s��J�I�I"<<endl;
			break;
		}
	}
	cout<<"�ثe��C���:";
	if(front >= rear){
			
		cout<<"[�ثe��C�w��!]"<<endl;
	
	}else{
		while(rear > front){
				
			front++;
			cout<<"["<<queue[front]<<"]"<<endl;
		}
			
	}
	
	return 0;
}
