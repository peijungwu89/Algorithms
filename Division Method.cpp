#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

//Hash���k��ܪk 

const int indexbox = 10;
const int maxnum = 7;

int print_data(int *data, int max){  //�C�L��l��� 
	for(int i=0; i<max; i++){
		cout<<"["<<setw(2)<<data[i]<<"]";
		}
	cout<<endl;
	
}

int create_table(int num, int *index){  //��������� 
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
	
	cout<<"��l���: "<<endl;
	
	for(int i=0; i<maxnum; i++){
		data[i] = rand()%200+1; //���ü�1-200�d�� 
	} 
	
	for(int i=0; i<indexbox; i++){  
		index[i] = -1;  //�w�]�ŭȬ�-1 
	}
	print_data(data, maxnum);
	
	cout<<"------------------------------------------------------"<<endl;
	
	cout<<"�������: "<<endl;
	for(int i=0; i<maxnum; i++){
		
		create_table(data[i], index);
		cout<<data[i]<<" �����e: ";
		print_data(index, indexbox);
	} 
	
	cout<<"------------------------------------------------------"<<endl;
	cout<<"�̲������: "<<endl;
	print_data(index, indexbox);
	return 0;
}
