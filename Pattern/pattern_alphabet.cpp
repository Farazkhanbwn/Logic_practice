#include<iostream>
using namespace std;

int main()
{
	int numRowsCols;
	string startSymbol;
	
	cout << "Enter the number to print = ";
	cin >> numRowsCols;
	cout << "Enter the start Symbol = ";
	cin >> startSymbol;
	
	while(numRowsCols > 0)
	{
		int column = 0;
		
		while (column < numRowsCols)
		{
			cout <<startSymbol;
			column++;
		}
		
		numRowsCols--;
		cout << endl;
	}
}

// Output

//	Enter the number to print = 5
//	Enter the start Symbol = A
//	AAAAA
//	AAAA
//	AAA
//	AA
//	A