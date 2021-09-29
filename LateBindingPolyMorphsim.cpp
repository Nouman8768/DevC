#import<iostream>
using namespace std;

class Base
{
	public:
	string a="BaseClass";
	virtual void display()
	{
		cout<<"This is a Base Class And the Name is: "<<a<<endl;
	}
	
	
};
class Drive:public Base
{
	private:
	string a="DriveClass";
	public:
	void display()
	{
		cout<<"This is a Drive Class And the Name is: "<<a<<endl;
	}
};
int main()
{
	Base *base;
	Base base_obj;
	Drive drive_obj;
	
	base=&drive_obj;
	base -> display();
	return 0;
	
	
	
}
