#include <iostream>
#include <sstream>
using namespace std;


	class Student{
		public:
			string name;
			int gradelevel;
			int ga;
			
		Student(string aName, int aGradelevel, int aGa){
			name = aName;
			gradelevel = aGradelevel;
			ga = aGa;
			
			cout << name << " is registered" << endl;
			cout << endl;
			
		}
		string getHonors(){	
		
		if(ga >= 91 || ga <= 100 ) {
			return "With High honors";
		}
		else if (ga >= 75 || ga <= 90) {
			return "Passed";
		}
		else {
			return "failed";
		}
	}
	
	
	string studentProfile(){
		stringstream ss;
		ss << gradelevel;
		
		return " I Am" + name + " a Grade " + ss.str() + " Student."; 
	}
	
	
	};

int main()
{
	Student student("mujakz", 4, 95);
	Student student1("kairos", 5, 94);
	Student student2("shesh", 4, 75);
	
	cout << student1.name << " "<< student1.getHonors() << " ";
	cout << student1.studentProfile();
	cout << student2.
	return 0;
}
	

 
