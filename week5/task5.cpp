#include<iostream>
#include<cmath>
using namespace std;
main()
{
    float num1,num2;
    cout<<"Enter base number: ";
    cin>>num1;
    cout<<"Enter exponent: ";
    cin>>num2;
    cout<<num1<<" based to power "<<num2 <<" is "<<pow(num1,num2);
}