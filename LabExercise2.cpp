//Lab Exercise 2 – Array Initialization

#include <iostream>
using namespace std;

int main() {
    double sales[5] = {12.25, 32.50, 16.90}; 
    int size = sizeof(sales) / sizeof(sales[0]);
    double sum = 0.0;

    cout << "Sales values:" << endl;
    for (int i = 0; i < size; i++) {
        cout << sales[i] << " ";
        sum += sales[i];
    }
    cout << endl;

    double average = sum / size;
    cout << "Average sales: " << average << endl;

    return 0;
}

/*
Original code output:
Sales values:
12.25 32.5 16.9 23 45.68
Average sales: 26.066

Modified code output:
Sales values:
12.25 32.5 16.9 0 0
Average sales: 12.33

What values are assigned to the uninitialized elements?
 - The unintialized elements are automatically set to 0
What happens if you specify a size smaller than the number of initial values?
 - The compiler will have an error, because the array cannot hold more values than its declared size.


*/
