#import<iostream>
using namespace std;

class Shape{
	public:
		int a;
	void size()
		{
			cout<<"The height for the shape:"<<a<<endl;
		}
		
};
class Rectangle:public Shape{
	public:
		int a;
	void size()
	    {
			cout<<"The height for the Rectangle:"<<a<<endl;
		}
};
class Triangle:public Shape{
	public:
		int a;
	void size()
	    {
			cout<<"The height for the Triangle:"<<a<<endl;
		}
	
};
int main(){
	
   Shape shape;
   shape.size();
   Rectangle rectangle;
   rectangle.size();
   Triangle triangle;
   triangle.size();
}
   

