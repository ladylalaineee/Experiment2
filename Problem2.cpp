#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int wdc=35;
	int lC=20;
	float gallons, UnpaidBal, WaterBill;
	float cC=1.10;
	
	cout << "WELCOME TO THE LEADING WATER COMPANY!" << endl; 
	cout << "Feel free to avail our services! \n" << endl;
	cout << "------------------------------- \n" << endl;
	cout << "Enter number of gallons used: " ; 
	cin >> gallons;
	cout << "Enter unpaid balance from last month: Php " ;
	cin >> UnpaidBal;
	
	WaterBill = (wdc+(gallons*cC));
	
	if (UnpaidBal > 0)
	{
	    cout <<"YOUR TOTAL BILL IS: Php "<< (WaterBill + lC) << endl;	
	}
	else
	{
		cout<<"YOUR TOTAL BILL IS: Php " << WaterBill << endl;
	}
		cout << "------------------------------- \n" << endl;
		cout << "Thank you for your patronage! \n" << "Have a great day, our dearest customers! \n";
	
	_getch ();
	return 0;
}
