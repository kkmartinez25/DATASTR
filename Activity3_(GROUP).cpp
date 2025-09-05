/*Write a program that takes hours and minutes as input, and calculates the total number of minutes. 
Kianne Kyle Martinez
Activity #3 
*/
#include <iostream>
using namespace std;

int main() {
    int hr=0, min=0, out=0;
    cout << "Input hours: ";
    cin >> hr;
    cout << "Input minutes: ";
    cin >> min;
    hr *= 60;
    out = hr + min;
    cout <<"Total: " << out <<" minutes";
    
    return 0;
