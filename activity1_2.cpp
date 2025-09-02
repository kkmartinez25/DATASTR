/*2. Sum of Positive Integers Until 0
Write a program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered.*/
#include <iostream>
using namespace std;

int main() {
    int i, sum = 0;
       cout << "Enter 0 to stop the loop" <<endl;
       cout << "Enter an integer: ";
       cin >> i;
    while (i != 0) {
        if (i > 0) {
           sum = sum + i;
        }
        
       cout << "Enter an integer: ";
       cin >> i;
    }
    cout <<"The sum of positive intergers are: " <<sum;
    return 0;
}
