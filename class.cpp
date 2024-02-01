#include <iostream>
#include <string> 
using namespace std;

// class

class User{
	public:
		string username;
		string type;
		int hp;
		int mp;
		int level;
		int xp;
	
	//Constructor 	
	User(string aUserName, string aType, int aHp, int aMp, int aLevel, int aXp){
	username = aUserName;
	type = aType;
	hp = aHp;
	mp = aMp;
	level = aLevel;
	xp = aXp;
	
	//cout << username << " is Registered " << endl;
	//cout << "The " << username << " character type is " << type << endl;
		
	}
};

int main()
{
	//object
	User playerOne("Mujakz", "Mage", 1000, 500, 60, 60);
	User playerTwo("Kairos", "physical", 1000, 600, 70, 60);	
	
	cout << playerOne.username << " " << playerOne.level;
	return 0;
}
