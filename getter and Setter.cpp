#include <iostream>
using namespace std;

class Shirt{ // blueprint of an object

	private:
		string Size;
	
	public: 
	//attributes
		string Brand;
		string color;
	
	//constructor	
	Shirt(string aBrand, string aColor, string aSize){
		Brand = aBrand;
		color = aColor;
		setSize(aSize);
		
		cout << "You Created a Shirt!" << endl;
	}
	//Getter
	string getSize(){
		return Size;
		
	}
	//Setter
	void setSize(string aSize){
		if (aSize == "S" || aSize == "XL" || aSize == "L" || aSize == "M" || aSize == "Xs")
		{
			Size = aSize;
		}else
		{
			Size = "Not size";		
		}	
	}
	
	
};

int main()
{
	Shirt shirt1("Bench", "Black", "S");
	Shirt shirt2("Oxygen", "White", "XllL");
	cout << shirt1.getSize();
	cout << endl;
	cout << shirt2.getSize();
	return 0;
}
