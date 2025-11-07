//Lab 3 – Partial Initialization

#include <iostream>
using namespace std;

int main()
{
    int list1[10] = {0};
    int list2[10] = {8, 5, 12};
    int list3[3] = {5, 6, 3};
    int list4[25] = {4, 7};

    cout << "list1: ";
    for (int i = 0; i < 10; i++)
        cout << list1[i] << " ";
    cout << endl;
    cout << "list2: ";
    for (int i = 0; i < 10; i++)
        cout << list2[i] << " ";
    cout << endl;
    cout << "list3: ";
    for (int i = 0; i < 3; i++)
        cout << list3[i] << " ";
    cout << endl;
    cout << "list4: ";
    for (int i = 0; i < 25; i++)
        cout << list4[i] << " ";
    cout << endl;

    return 0;
}
/*
Output:
list1: 0 0 0 0 0 0 0 0 0 0 
list2: 8 5 12 0 0 0 0 0 0 0
list3: 5 6 3
list4: 4 7 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
----------------------------------------------------------------------
1.	Observe and record the values of uninitialized components.
- The first values we assign are set, and all remaining elements that are not given a value are automatically set to 0.

Try initializing as follows and note the compiler response:
 int list5[5] = {4, , 7, 9};
  -  error: expected primary-expression before ',' token
   28 |     int list5[5] = {4, , 7, 9};
      |                        ^
  
  2.	Explain why the compiler raises an error.
  - It gives an error for not assigning or leaving the element blank

*/
