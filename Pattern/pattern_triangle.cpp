#include<iostream>
using namespace std;

int main(){
	
	int limit;
	cout << "Enter the number to display = ";
	cin >> limit;
	
	while(limit >= 0)
	{
		int column = 0;
		
		while (column <= limit)
		{
			cout << column ;
			column++;
		}
		
		limit--;
		cout <<endl;
	}
}

// Output of Pattern
//	Enter the number to display = 5
//	012345
//	01234
//	0123
//	012
//	01
//	0