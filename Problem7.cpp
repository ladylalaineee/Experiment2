#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{

	int i, n, sum;	

	cout << "Enter a number: ";
	cin >> n;
 
 	while (n>0)
	{
		sum = 0;
		
	for (i=1; i<=n; i++)
	{
		sum+=i;
	}
		cout << "The sum of all whole numbers from 1 to " << n << " is " << sum << "." << endl;
		cout << "Enter a number: ";
		cin >> n;	
	}
	
cout << "Thank you!";
	
	_getch();
	return 0;
}
