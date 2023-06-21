#include<iostream>
using namespace std;

int main() {
	
    int number = 2;

    while(number <= 100){
    	
    	if (number < 8){
    		goto startPrime;
		}
		else{
			goto nextprime;
		}
		
	startPrime:
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
		
	nextprime:
		if(number % 2 != 0 && number % 3 != 0 && number % 5 != 0 && number % 7 != 0)
		{
			cout << number << "\t";
		}
		
		number++;
        
    }
}