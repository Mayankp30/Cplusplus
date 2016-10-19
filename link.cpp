#include <iostream>
using namespace std;

struct Node{

	int data;
	Node* next;
};

static int counter;

int getCounter(){
	return counter;
}

int size(){
	return getCounter();
}

void increment(){
	counter++;
}

void decrement(){
	counter--;
}

Node* head;

void insert(int x){
	Node* temp=new Node();
	temp->data=x;
	temp->next=head;
	head=temp;
	increment();

}

void print(){
	Node* temp=head;
	cout<<"List is: ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(int argc, char const *argv[])
{
	head=NULL;
	
	insert(5);
	insert(2);
	insert(1);


	print();
	cout<<size()<<endl;
	return 0;
}

