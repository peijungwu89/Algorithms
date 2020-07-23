#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>


using namespace std;

int bin_search(int data[80], int val){
	
	int low, middle, high;
	low = 0;
	high = 79;
	cout<<"��Ʒj�M��..."<<endl;	

	while(low<high && val!=-1){
		
		middle = (low+high)/2;
		if(val < data[middle]){
			cout<<val<<"���_�l��m:"<<low+1<<"�P������m��: "<<(middle+1)<<" ���U�ө�������"<<endl;
			high = middle-1;
			
		}else if(val > data[middle]){
			cout<<val<<"���󤤶���m:"<<middle+1<<"�ε�����m: "<<(high+1)<<" ���U�ө��k����"<<endl; 
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
	
	cout<<"�H�U���H�����G: "<<endl;
	for(int j=0; j<sizeof(data) / sizeof(data[0]); j++){
    	 
    	cout<<setw(5)<<data[j];
    	
	}
	
	cout<<endl<<endl;
	
	while(1){
		
		num = 0;
		cout<<"�п�J�n�j�M����(��J-1����) :";
		cin>>val;
		
		if (val == -1)
		break;
			
		num = bin_search(data,val);	
		
		if(num == -1){
		
			cout<<"�䤣��z�n����!"<<endl; 
			
		}else{
		
			cout<<"�z�M�䪺�ƭȦb�� "<<(num+1)<<" �Ӧ�m"<<endl; 
		}
	
	
				
	}
	
	return 0;
	
	
}
