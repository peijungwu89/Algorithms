#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
    int x,y,row,col;

	cout<<"請輸入X維度值：";
	cin>>x;
	
	cout<<"請輸入y維度值：";
	cin>>y;
		
	
	
	int *arryA=new int[x*y];
	int *arryB=new int[x*y];	
	
	cout<<"請輸入原矩陣內容："<<endl;
	
	for(row=1;row<=x;row++){
		
		for(col=1;col<=y;col++){
			
		
		 cout<<"a"<<row<<col<<"=";
		 cin>>arryA[(row-1)*y+(col-1)];
			
		}
		
	}
	
	

	for(row=1;row<=y;row++){
		
		for(col=1;col<=x;col++){
			
		
			
			arryB[(col-1)*y+(row-1)]=arryA[(col-1)*y+(row-1)];
			
		}
		
		}

	
	

	
	cout<<"置換矩陣輸入結果："<<endl;
	
	for(row=1;row<=y;row++){
		
		for(col=1;col<=x;col++){
			
	     cout<<arryB[(col-1)*y+(row-1)]<<"\t";
		
		}
		
		cout<<endl;
		
	}
	
	
	
	return 0;
}