#include <iostream>
using namespace std;
int main()
{
	int money;
	cin>>money;
	if (money<200){
		cout<<"I have Money\n";
	} else if (money>10000000) {//should be in USD
		cout<<"I am Millionaire\n";
	} else                {
		cout<<"Keep working\n";
	}
}
