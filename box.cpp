#include <iostream>
using namespace std;


class Box
{
   public:
      double getVolume(void)
      {
         return length * breadth * height;
      }
      Box(double length,double breadth,double height){
      	this->length=length;  // this pointer is a constant pointer that holds the memory address of the current object
      	this->breadth=breadth;
      	this->height=height; 
      }
   private:
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box
};

int main(int argc, char const *argv[])
{
	Box box(5.2,1.7,3.4);
	cout<<"Box Volume : "<<box.getVolume()<<endl;
	return 0;
}