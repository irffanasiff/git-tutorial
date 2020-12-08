//write a program of swapping two variables without using the third variable
#include <iostream>
using namespace std;
int main()
{
    int x,y;
    x=5;
    y=6;
     cout<<"before swapping x: "<<x<<" y: "<<y<<endl;

x=x+y; //x=11
y=x-y; //11-6=5
x=x-y; //11-5=6

    cout<<"after swapping x: "<<x<<" y: "<<y<<endl; 
    return 0;
}