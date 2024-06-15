#include <iostream>
using namespace std;
int main ()
{
    int charges,duration,tot;
    cout<<"Enter call duration = ";
    cin>>duration;

    if(duration>0 && duration<=2)
    charges=12;
    else if (duration>2 && duration<=5)
    charges=10;
    else if(duration>5 && duration<=8)
    charges=7;
    else if (duration>8 && duration<=10)
    charges=5;
    else
    charges=3;

    tot=charges*duration;

    cout<<"Your Total call charges are = "<<tot<<"pkr"; 
}
