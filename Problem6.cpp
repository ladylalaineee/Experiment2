#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int f,first=0, second=1, third;
	cout << "Fibonacci numbers:" << endl;
	
	for (int f=0; f<22; f++)
	{
		if (f<=1)
		third=f;
		else
		{
			third=first+second;
			first=second;
			second=third;
		}
		cout << third << ",";
	}

_getch ();	
return 0;
}
