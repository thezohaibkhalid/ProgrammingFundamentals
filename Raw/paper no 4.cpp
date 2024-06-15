#include<iostream>
using namespace std;
int main()
{
double length,width,area,perimeter;
cout<<"Enter the length = ";
cin>>length;
cout<<"Enter the width = ";
cin>>width;

area=width*length;
perimeter=(length+width)*2;
cout<<"Area of Rectangle is "<<area<<endl;
cout<<"Perimeter of rectangle is  "<<perimeter;

return 0;


}
