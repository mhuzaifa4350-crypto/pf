#include<iostream>
using namespace std;
bool isSymmetrical(int number);
main()
{
    int  num;
    cout<<"Enter three digit number: ";
    cin>>num;
    cout<<isSymmetrical(num);

}
bool isSymmetrical(int number)
{
    int digit3 = number%10;
    int digit1 = number/100;
    if(digit1 == digit3)
    {
        return true;
    }
    else
    {
        return false;

    }

}