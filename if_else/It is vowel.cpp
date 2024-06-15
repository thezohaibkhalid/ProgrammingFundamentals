#include<iostream>
using namespace std;
int main()
{
	char z;
	int islowercasevowel, isuppercasevowel;
	cout<<"Enter an Alphabhet = ";
	cin>>z;
	
	islowercasevowel = (z=='a' || z=='e' || z=='i' || z=='o' || z=='u');
    
	isuppercasevowel = (z=='A' || z=='E' || z=='I' || z=='O' || z=='U');
    
    if( islowercasevowel || isuppercasevowel){
    	cout<<"It is vowel.";
	}
	else{
		"It is a consonant.";
}
    return 0;
} 
