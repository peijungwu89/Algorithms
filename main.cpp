#include <iostream>
using namespace std;


typedef struct ns{
	int data;
	struct ns *next;
		
}node; 

node* create_node(int);
void insert_node(node*, node*);
void remove_node(node*);
void print_list(node*);
void delete_list(node*);



int main(int argc, char** argv) {
	
	node* lists = create_node(0);
	node* a = create_node(1);
	node* b = create_node(2);
	node* c = create_node(3);
	node* d = create_node(4);
	node* e = create_node(5);
	

	
	insert_node(lists, a);
	insert_node(a, b);
	insert_node(b, c);
	insert_node(c, d);
	insert_node(d, e);
//	insert_node(lists, c);
	
	remove_node(b);
	print_list(lists);
	delete_list(lists);

	
	return 0;
}

node* create_node(int data){
	
	node* n = new node;
	n -> data = data;
	n -> next = NULL;
	
	return n;
} 

void insert_node(node* n1, node* n2){
	
	n2 -> next = n1 -> next;
	n1 -> next = n2;
	
}

void remove_node(node* n1){
	
	node* tempNode = new node;
	tempNode -> data = n1 -> next -> data;
	tempNode -> next = n1 -> next;
	tempNode -> next  = n1 -> next -> next;
	delete tempNode;
}

void print_list(node* lists){
	
	node* n = lists;
	while (n != NULL){
		cout<<n -> data;
		n = n -> next;
	}
	cout<<endl;
	
}

void delete_list(node* lists){
	
	if(lists -> next != NULL){
		delete_list(lists -> next);
		
	}
	delete lists;
}
