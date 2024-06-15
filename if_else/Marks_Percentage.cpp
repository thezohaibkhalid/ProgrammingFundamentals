
#include <iostream>
using namespace std;
int main()
{
	int Eng,Mth,Phy,Bio,Chem,Total_marks,Percentage;
	cout<<"Eng Marks";
	cin>>Eng;
	cout<<"Mth Marks";
	cin>>Mth;
	cout<<"Phy Marks";
	cin>>Phy;
	cout<<"Bio Marks";
	cin>>Bio;
	cout<<"Chem Marks";
	cin>>Chem;
	cout<<"Percentage";
	cout<<"Total_marks";
	cin>>Total_marks;
	Total_marks=Eng+Mth+Phy+Bio+Chem;
	Percentage=((Total_marks/500)*100);
	
	   if
	     (Percentage>=50){
		cout<<"Zohiab Passed";
       }
        else if(Percentage<50){
    	cout<<"Zohaib What's this";
   	  }
	
	
}
