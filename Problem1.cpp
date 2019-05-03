#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int pA=995; 
	int pB=1495;
	int pC=1995;
	int hA, hB;
	int hours, total, FinalTotal;
	char input;
	
	cout << "WELCOME TO THE LEADING INTERNET SERVICE PROVIDER!" << endl;
	cout << "Feel free to avail any of our existing packages! \n" << endl;
	cout << "PACKAGE A: Php 995 per month with 10 hours of access provided. **Additional hours are Php 20 per hour." << endl;
	cout << "PACKAGE B: Php 1495 per month with 20 hours of access provided. **Additional hours are Php 10 per hour." << endl;
	cout << "PACKAGE C: Php 1995 per month with unlimited access provided. \n" << endl;
	cout << "------------------------------- \n" << endl;		
	cout << "Please enter package subscription: A, B or C \n" << endl;
	cout << "Package Subscription: ";
	cin >> input;


	switch (input)
	{
		case 'A':
		case 'a':
				
				cout << "Excess Hours Used: " ;
				cin>> hours;
				FinalTotal = pA + (hours * 20);
				hA = 10 + hours;
				cout<< "Total Hours Used: " << hA << endl;
				cout<< "TOTAL MONTHLY BILL: Php " << FinalTotal << "\n" << endl; 
				break;
				

		
		case 'B':
		case 'b':
				
				cout << "Excess Hours Used: " ;
				cin >> hours;
				FinalTotal = pB + (hours * 10);
				hB = 20 + hours;
				cout << "Total Hours Used: " << hB << endl;
				cout << "TOTAL MONTHLY BILL: Php " << FinalTotal << "\n" << endl;
				break; 


		case 'C':
		case 'c':
				
				FinalTotal = pC;
				cout << "TOTAL MONTHLY BILL: Php " << FinalTotal << "\n" << endl; 
				
				break;
}
		cout << "------------------------------- \n" << endl;
		cout << "Thank you for your patronage! \n" << "Have a great day, our dearest customers! \n";
		
_getch ();		
return 0;
}

			 
