#include<iostream>
using namespace std;
int main()
{
	char button;
	cout<<"Enter a character : ";
	cin>>button;
	
/*	
	if(button=='a'){
		cout<<"Hello";
	}else if(button=='b'){
		cout<<"Nasmeta";
	}else if(button=='c'){
		cout<<"Salut";
	}else if(button='d'){
		cout<<"Hola";
	}else if(button='e'){
		cout<<"Ciao";
	}else{
	cout<<"I'm still learning ";
	}*/ 
	
	switch(button)
	{
	
	case'a':
		cout<<"Hello"<<endl;
	break;
	
	case'b':
		cout<<"Nasmeta"<<endl;
	break;
	case'c':
		cout<<"Salut"<<endl;
	break;
	case'd':
		cout<<"Hola"<<endl;
	break;
	case'e':
		cout<<"Ciao"<<endl;
	break;
	
	default:
		cout<<"I'm still learning this language";
	}
	return 0;
}
