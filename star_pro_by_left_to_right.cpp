#include <iostream>
using namespace std;
int main ()
{
//pro 1
	for (int i=1;i<=5;i++)
	{
		for (int j=1;j<=i;j++)
			cout << "*";
		cout << endl;
	}
//pro 2
cout << endl << endl;
	for (int i=5;i>=1;i--)
	{
		for (int j=1;j<=i;j++)
			cout << "*";
		cout << endl;
	}
// pro 3
cout << endl << endl;
	for (int i=5;i>=1;i--)
	{
		for (int j=5;j>=i;j--)
			cout << " ";
		for (int j=1;j<=i;j++)
			cout << "*";
		cout << endl;
	}
//pro 4
cout << endl << endl;
	for (int i=1;i<=5;i++)
	{
		for (int j=5;j>=i;j--)
			cout << " ";
		for (int j=1;j<=i;j++)
			cout << "*";
		cout << endl;
	} 
}
