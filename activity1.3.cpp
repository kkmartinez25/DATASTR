/*3. Product of Numbers from 1 to 5
Write a program that calculates the product of numbers from 1 to 5 using a while loop.*/
#include <iostream>
using namespace std;

int main() {
    int i = 1, product = 1;

    while (i <= 5) {
        product = product * i;
        i++;
    }

    cout << "The product of numbers from 1 to 5 is: " << product;
    return 0;
}
