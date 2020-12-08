//PROGRAM FOR SWAPING TWO VARIABLES WITH A VARIABLE
#include<iostream>
using namespace std;
int main()
{
    cout<<"swapping program"<<endl;
    int x,y,temp;
    x=5;
    y=6;
    cout<<"before swapping"<<" x = "<<x<<" y = "<<y<<endl;
   

temp=x; //temp=5
x=y; //x=6
y=temp; //y=temp=5

    cout<<"after swapping"<<" x = "<<x<<" y = "<<y<<endl;   
    return 0;
}