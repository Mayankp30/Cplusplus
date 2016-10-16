#include <iostream>
using namespace std;

class Shape{
protected:
	int b;
	int l;

public:
	virtual int getArea() = 0;
	//virtual int getCircumference() = 0;

	void setLength(int l){
		this->l=l;
	}
	void setWidth(int b){
		this->b=b;
	}
};

class Square : public Shape{
public:
	int getArea(){
		return 2*l+2*b;
	}
};

class Rectangle : public Shape{
	public:
		int getArea(){
			return l*b;
		}
};

int main(int argc, char const *argv[])
{
	Square sq;
	sq.setWidth(5);
	sq.setLength(4);

	Rectangle rec;
	rec.setLength(2);
	rec.setWidth(5);

	cout<<sq.getArea()<<endl;
	cout<<rec.getArea()<<endl;

	return 0;
}