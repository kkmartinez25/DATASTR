/*1. Print Numbers Using Two While Loops
Write a program to print numbers from 0 to 10 and 10 to 0 using two while loops.*/
#include <iostream>
using namespace std;
int main() {
    int i=0;
    cout<< "Displaying 0 to 10" <<endl;
    while ( i !=11){
    cout << i <<" ";
    ++i;
    }
    cout << endl;
    
    cout << "Displaying 10 to 0"<<endl;
    i =10;
    while (i>=0){
        cout <<i <<" ";
        --i;
    }
    return 0;
}
