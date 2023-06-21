#include<iostream>
using namespace std;

int main() {
	
    int number = 2;

    while(number <= 100){

        if(number < 4)
		{
        	cout << number << "\t";
		}
		
		else if(number < 8)
		{
			if(number % 2 != 0)
			{
				cout << number << "\t";
			}
		}
		
		else if(number % 2 != 0 && number % 3 != 0 && number % 5 != 0 && number % 7 != 0)
		{
			cout << number << "\t";
		}
		
		number++;
        
    }
}

//Output
// 2       3       5       7       11      13      17      19      23      29      31      37      41      43      47      53      59      61      
// 67      71      73      79      83      89      97