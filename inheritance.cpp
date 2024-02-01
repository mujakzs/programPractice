#include <iostream>
using namespace std;

class student{
	public:
		string name;
		
		//setter
	void setName(string aName){
		name = aName
	}
	
	//getter
	string getName()
	{
		return name;
	}
	//Object functions
	void introduceSelf(){
		cout << "Hello My Name is " << name
	}
};


int main()
{
	student student1;
	student1.setName("Mujakz")
	student1.introduceSelf();
	
	return 0;
}
