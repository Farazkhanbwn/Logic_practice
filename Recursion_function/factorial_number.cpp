#include<iostream>
using namespace std;

int fact(int number);

int main() {
    int number;

    cout << "Enter a number to Find Factorial: ";
    cin >> number;

    cout << "Factorial is =  " << fact(number);

    return 0;
}

int fact(int num) {
    if(num > 1)
        return num * fact(num - 1);
    return 1;
}

// Output
// Enter a number to Find Factorial: 5
// Factorial is =  120