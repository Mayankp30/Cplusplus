#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

// only for the 1st Node
void initNode(Node *head,int n){
	head->data = n;
	head->next =NULL;
}

// apending
void addNode(Node *head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;

	Node *cur = head;
	while(cur!=NULL) {
		if(cur->next == NULL) {
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}

// search for any specific node
Node *searchNode(Node *head, int n) {
	Node *cur = head;
	while(cur!=NULL) {
		if(cur->data == n){
			return cur;
		}
		cur = cur->next;
	}
	cout << "No Node " << n << " in list.\n";
}

// delete node
bool deleteNode(Node **head, Node *ptrDel) {
	Node *cur = *head;
	if(ptrDel == *head) {
		*head = cur->next;
		delete ptrDel;
		return true;
	}
	
	while(cur) {
		if(cur->next == ptrDel) {
			cur->next = ptrDel->next;
			delete ptrDel;
			return true;
		}
		cur = cur->next;
	}
	return false;
}


// display
void display(struct Node *head) {
	Node *list = head;
	while(list!=NULL) {
		cout << list->data << " ";
		list = list->next;
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	Node *newHead;
	Node *head = new Node;

	
	initNode(head,10);
	addNode(head,20);
	addNode(head,25);
	addNode(head,30);
	display(head);

	int numDel = 5;
	Node *ptrDelete = searchNode(head,numDel);
	if(deleteNode(&head,ptrDelete)) 
		cout << "Node "<< numDel << " deleted!\n";
	display(head);

}

