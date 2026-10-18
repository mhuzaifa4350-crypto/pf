#include<iostream>
using namespace std;
string OddishOrEvenish(int number);
main()
{
    int num;
    cout<<"Enter number ";
    cin>>num;
    cout<<OddishOrEvenish(num);

}
string OddishOrEvenish(int number)
{
    int sum = 0;
    while(number%10 == 0)
    {
        int digit = number%10;
        number = number/10;
        sum = sum + digit;
    }
    sum = sum + number;
    if(sum%2 == 0)
    {
        string s = "Evenish";
        return s;
    }
    else
    {
        string s = "Oddish";
        return s;
    }

}