#include <iostream>
using namespace std;

int main() {
    int userInput, sum = 0;
    int currentNumber = 0, nextNumber = 1, temp = 0;
    
    cout << "Enter a number: ";
    cin >> userInput;

    for (int i = 1; i <= userInput; i++) {
        cout << currentNumber << "\t";
        
        sum += currentNumber;
        temp = currentNumber + nextNumber;
        currentNumber = nextNumber;
        nextNumber = temp;
    }

    cout << endl << "Sum is = " << sum;
    return 0;
}


// Output
//Enter a number5
//0       1       1       2       3
//sum is = 7