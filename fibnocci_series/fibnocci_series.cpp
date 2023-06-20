#include<iostream>
using namespace std;

int main(){
	
	int userInput , sum=0;
	int var1 =0, var2 =1, result = 0;
	cout << "Enter a number";
	cin >> userInput;
	
	for(int i=1; i<=userInput ; i++){
		
		cout << var1 <<"\t" ;
		sum = sum + var1;
		result = var1 + var2;
		var1 = var2;
		var2 = result;
		
	}
	
	cout <<endl<< "sum is = "<<sum;
}

// Output
//Enter a number5
//0       1       1       2       3
//sum is = 7