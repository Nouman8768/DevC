#import<iostream>
using namespace std;

class Animal{
	public:
	string name;
	string age;
	string color;
	string weight;
	string food;
	string mobility;
		
		void voulantryactions(){
			cout<<"Enter what it eats: "<<endl;
			cin>>food;
			cout<<"Enter the way of mobility for the animal: "<<endl;
			cin>>mobility;	
		}
		void invoulantryactions(){
			cout<<"Enter the name of animal: "<<endl;
			cin>>name;
			cout<<"Enter the age of the animal: "<<endl;
			cin>>age;
			cout<<"Enter color of the animal: "<<endl;
			cin>>color;
			cout<<"Enter weight of the animal "<<endl;
			cin>>weight;
		
		}
	
};
class snake:public Animal
{
	private:
		string kill;
		public:
			void killmethode()
			{
			
			cout<<"What is the methode for the killing of the animal: "<<endl;
			cin>>kill;
			
		}
			void show(){
				cout<<"------------------------"<<endl;
				cout<<"------------------------"<<endl;
				cout<<"Name:"<<name<<endl;
				cout<<"Age:"<<age<<endl;
				cout<<"Color:"<<color<<endl;
				cout<<"Weight:"<<weight<<endl;
				cout<<"It eat: "<<food<<endl;
				cout<<"Methode of mobility:"<<mobility<<endl;
			};
		
};
int main()
{
	snake cobra;
	cobra.invoulantryactions();
	cobra.voulantryactions();
	cobra.killmethode();
	cobra.show();
	
}

