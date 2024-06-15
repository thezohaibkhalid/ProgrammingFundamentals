#include<iostream>
using namespace std;

int main()
{
    int i,j,n=1000;
    while(i<=n){
        int counter=0;
        j=1;
        while(j<=i){
        if(i%j==0){
            counter++;
        }
         j++;
    }
    if(counter==2){
        cout<<i<<endl;
    }
    i++;
    }
    return 0;
}
