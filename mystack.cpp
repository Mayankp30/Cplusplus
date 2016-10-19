#include <iostream>
using namespace std;

class Stack{
private:
	int size;
	int *storage;
	int top;

public:
	Stack(int element){
		storage = new int[element];
		top=-1;
		size=element;
	}

	void push(int x){
		storage[++top]=x;
	}

	int pop(){
		return storage[top--];
	}

	int peek(){
		return storage[top];
	}

	bool isEmpty(){
		if(top==-1){
			return true;
		}
		return false;
	}

	bool isFull(){
		if(top==size-1){
			return true;
		}
		return false;
	}

	

};

int main(int argc, char const *argv[])
{
	cout<<"Stack"<<endl;
	Stack s1(4);


	s1.push(5);
	s1.push(8);
	s1.push(11);
	s1.push(4);
	cout<<s1.peek()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.peek()<<endl;
	cout<<s1.isFull()<<endl;
	cout<<s1.isEmpty()<<endl;
	
	return 0;
}