//Lab Exercise 1 – Array Index and Bounds

#include <iostream>
using namespace std;

int main()
{
    int list[5] = {1, 2, 3, 4, 5};
    cout << "invalid list[5]: " << list[5] << endl;
    return 0;
}
/* Output: invalid list[5]: 206
When you run the program it gives a random number
*/ 
#include <iostream>
using namespace std;

int main()
{
    int list[5] = {1, 2, 3, 4, 5};
    int index;
    cout << "Enter an index (0-4): ";
    cin >> index;
    if (index >= 0 && index < 5) // to prevent acessing arrays other than 0-4
    {
        cout << "Value at index " << index << " is " << list[index] << endl;
    }
    else
    {
        cout << "Error: Invalid index!" << endl;
    }
    return 0;
}
/*5.	Explain why C++ does not automatically check array bounds.
 - Because the language was designed for performance and speed, checking array bounds would slow down array operations.

 •	How can array index errors cause unpredictable results?
  -Array index errors can corrupt memory, cause crashes, or lead to incorrect data being read or written.

  •	What are good programming practices to prevent them?
   -Make sure that the index is within the valid range before acessing an element and to thoroughly test your loops and array operations.
 */
















