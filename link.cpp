#include <iostream>
using namespace std;

struct Node{

	int data;
	Node* next;
};
Node* head;

void insert(int x){
	Node* temp=new Node();
	temp->data=x;
	temp->next=NULL;
	head=temp;

}

void print(){
	Node* temp=head;
	cout<<"List is: ";
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
}
int main(int argc, char const *argv[])
{
	head=NULL;
	
	insert(5);

	insert(2);
	print();

	return 0;
}

