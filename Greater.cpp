#include<iostream>
using namespace std;
int main(){
    int a,b,c=0,i,count;
    cout<<"Prime Number\n";
    cout<<"Enter the Number\n ";
    cin>> a ;
    for(i=1;i<=a;i++){
    if(a%i==0){
    	c=c+1;
	} }
	if(c==2){
		cout<<"Number is Prime";
	}
	else{
		cout<<"Number is Not Prime";
	}

    return 0;
}

