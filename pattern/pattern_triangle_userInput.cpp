#include<iostream>
using namespace std;

int main()
{
	int numRowsCols;
	string startSymbol;
	
	cout << "Enter number of rows and columns = ";
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

//	Enter number of rows and columns = 5
//	Enter the start Symbol = A
//	AAAAA
//	AAAA
//	AAA
//	AA
//	A