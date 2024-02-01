#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	float capital, amount, rate, nyrs;
	
	cout << "This program calculates the amount of money\n in a bank account for initial deposit \n invested for n years at an interest rate r. \n\n" << endl;
	cout << "Enter the initial amount in the account: ";
	cin >> amount;
	cout << "Enter the number of years: ";
	cin >> nyrs;
	
	capital = amount * pow((1+rate/100.0), nyrs);
	
	cout << setiosflags (ios::fixed) << setiosflags (ios::showpoint) << setprecision(2);
	
	cout << "\nThe Final amount of money is " << setw(8) << 'S' << capital << endl;
	
	return 0;
	
}
