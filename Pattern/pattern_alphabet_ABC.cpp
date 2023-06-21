#include<iostream>
using namespace std;

int main() {
    int rows ;
    
    cout << "Enter Number of Rows = ";
    cin >> rows;
    
    while(rows >= 0){
        
        int columnCounter = 0;
        while(rows > columnCounter){
            char character = char(65 + columnCounter);
            cout << character;
            columnCounter++;
        }
        
        rows--;
        cout <<endl;
    }
}

// 	Output
//	Enter Number of Rows = 5
//	ABCDE
//	ABCD
//	ABC
//	AB
//	A