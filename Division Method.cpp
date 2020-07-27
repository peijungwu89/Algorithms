#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

//Hash除法表示法 

const int indexbox = 10;
const int maxnum = 7;

int print_data(int *data, int max){  //列印原始資料 
	for(int i=0; i<max; i++){
		cout<<"["<<setw(2)<<data[i]<<"]";
		}
	cout<<endl;
	
}

int create_table(int num, int *index){  //產生雜湊表 
	int temp;
	temp = num%indexbox;
	while(1){
		if(index[temp]==-1){
			index[temp]=num;
			break;
		}else{
			temp = (temp+1)%indexbox;
		}
	}
}

int main(int argc, char** argv) {
	
	int i, index[indexbox], data[maxnum];
	srand(time(NULL));
	
	cout<<"原始資料: "<<endl;
	
	for(int i=0; i<maxnum; i++){
		data[i] = rand()%200+1; //取亂數1-200範圍 
	} 
	
	for(int i=0; i<indexbox; i++){  
		index[i] = -1;  //預設空值為-1 
	}
	print_data(data, maxnum);
	
	cout<<"------------------------------------------------------"<<endl;
	
	cout<<"雜湊表項目: "<<endl;
	for(int i=0; i<maxnum; i++){
		
		create_table(data[i], index);
		cout<<data[i]<<" 的內容: ";
		print_data(index, indexbox);
	} 
	
	cout<<"------------------------------------------------------"<<endl;
	cout<<"最終雜湊表: "<<endl;
	print_data(index, indexbox);
	return 0;
}
