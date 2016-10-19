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

// only for the 1st Node
void initNode(Node *head,int n){
	head->data = n;
	head->next =NULL;
}


// apending
void addNode(struct Node *head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;

	Node *cur = head;
	while(cur) {
		if(cur->next == NULL) {
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
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
	Node *newHead;
	Node *head = new Node;
	
	initNode(head,10);
}

