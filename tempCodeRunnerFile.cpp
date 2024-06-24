#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Compare Two Number\n";
    cout<<"Enter the 1st Number = ";
    cin>>"a";
    cout<<"Enter the 2nd Number = ";
    cin>>"b";
    cout<<"Enter the 3nd Number = ";
    cin>>"c";
    if(a>b&&a>c)
    cout<<" A is Greater Than B and C";
     if(b>a&&a>c)
    cout<<" A is Greater Than B and C";
     if(c>a&&c>b)
    cout<<" A is Greater Than B and C";
    getch();
    return 0;
}