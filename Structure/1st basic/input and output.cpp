#include<iostream>
using namespace std;

struct employee
{ /* Data */
	int eId;
	char favChar;
	float salary;
};
int main()
{
	struct employee zohaib;
	
	zohaib.eId=1;
	zohaib.favChar='c';
	zohaib.salary=120000;
	
	cout<<zohaib.eId<<endl;
	cout<<zohaib.favChar<<endl;
	cout<<zohaib.salary<<endl;
	return 0;
}

