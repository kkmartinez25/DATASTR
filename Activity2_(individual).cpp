/*Write a program that prints the expected output for the following information below:
Input Full name
Input Course,  & Sec.
Input BirthdayYr.
Input Motto/Motivation in Life
Output:
Hi! I'm [Full name] of [Course, Yr. & Sec.]. Welcome to Data Structures and Algorithm!
My Birthday is on [Birthday]. and my motto/motivation in life is [Motto/Motivation in Life]*/

#include <iostream>
using namespace std;

int main() {
    string name, course, birthday, motto;

    cout << "What is your fullname?" << endl;
      getline (cin,name);
    cout << "What is your Course, Yr. & Sec.?(IT2J)" << endl;
     getline (cin,course);
    cout << "When is your birthday?(MM/DD/YYYY)" << endl;
     getline (cin,birthday);
    cout << "What is your motto/motivation in life" << endl;
     getline (cin,motto);
    cout << "Hi! I'm " << name << " of " << course << ". Welcome to Data Structures and Algorithm!" <<endl;
    cout << "My Birthday is on "<< birthday <<" and my motto/motivation in life is \""<< motto << "\""<< endl;
    return 0;
}
