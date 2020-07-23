#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>


using namespace std;

int bin_search(int data[80], int val){
	
	int low, middle, high;
	low = 0;
	high = 79;
	cout<<"資料搜尋中..."<<endl;	

	while(low<high && val!=-1){
		
		middle = (low+high)/2;
		if(val < data[middle]){
			cout<<val<<"的起始位置:"<<low+1<<"與中間位置為: "<<(middle+1)<<" 接下來往左側找"<<endl;
			high = middle-1;
			
		}else if(val > data[middle]){
			cout<<val<<"介於中間位置:"<<middle+1<<"及結束位置: "<<(high+1)<<" 接下來往右側找"<<endl; 
			low = middle+1;
			
		}else{
			
			return middle;
		}
		
	}

return -1;

}

 

int main(int argc, char** argv) {
	
	int num, val, data[80]={0};
	srand(time(NULL));
	
	for (int i=0; i<80; i++){
		data[i]=val;
		val+=(rand()%2+1);	
	}
	
	cout<<"以下為隨機結果: "<<endl;
	for(int j=0; j<sizeof(data) / sizeof(data[0]); j++){
    	 
    	cout<<setw(5)<<data[j];
    	
	}
	
	cout<<endl<<endl;
	
	while(1){
		
		num = 0;
		cout<<"請輸入要搜尋的值(輸入-1結束) :";
		cin>>val;
		
		if (val == -1)
		break;
			
		num = bin_search(data,val);	
		
		if(num == -1){
		
			cout<<"找不到您要的值!"<<endl; 
			
		}else{
		
			cout<<"您尋找的數值在第 "<<(num+1)<<" 個位置"<<endl; 
		}
	
	
				
	}
	
	return 0;
	
	
}
