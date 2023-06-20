#include<iostream>
using namespace std;

int main() {
    int userInput , limit;
    
    cout << "Enter Number of Row & Columns = ";
    cin >> userInput;
    
    limit = userInput + 65;
    
    while(limit > 65){
        
        int asciValue = 65;
        
        while(limit > asciValue){
        	
            char character = char(asciValue);
            cout << character;
            asciValue++;
        }
        
        limit--;
        cout <<endl;
    }
}

// 	Output
//	Enter Number of Row & Columns = 5
//	ABCDE
//	ABCD
//	ABC
//	AB
//	A