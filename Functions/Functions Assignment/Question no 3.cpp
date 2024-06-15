/*Input Regno, grade, CGPA from user. Pass it to a function which displays it..*/
#include <iostream>
#include <string>
using namespace std;

void displayStudentInfo(int regNo, string grade, float cgpa) {
    cout<<"Registration number: "<<regNo<<endl;
    cout<<"Grade: "<<grade<<endl;
    cout<<"CGPA: "<<cgpa<<endl;
}


int main() {
    int regNo;
    string grade;
    float cgpa;
    cout<<"Enter registration number: ";
    cin>>regNo;
    cout<<"Enter grade: ";
    cin>>grade;
    cout<<"Enter CGPA: ";
    cin>>cgpa;
    displayStudentInfo(regNo, grade, cgpa);
    return 0;
}

