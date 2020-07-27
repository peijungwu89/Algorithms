#include <iostream>
#include <map>
using namespace std;


int main(int argc, char** argv) {

map<char,int> mmap;
map<char,int>::iterator it;


mmap.insert(pair<char,int>('a',50));
mmap['b']=51;
mmap['c']=52;
mmap['d']=53;
	
it=mmap.begin();

for(it=mmap.begin();it!=mmap.end();it++){
	
cout<<"鍵："<<it->first<<" 值："<<it->second<<endl;

}
cout<<"==========================================================="<<endl;

it=mmap.find('c');
mmap.erase(it);

for(it=mmap.begin();it!=mmap.end();it++){
	
cout<<"鍵："<<it->first<<" 值："<<it->second<<endl;

}



	return 0;
}