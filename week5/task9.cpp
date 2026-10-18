#include<iostream>
using namespace std;
string checkAlphabetCase(char ch);
main()
{
    char character;
    cout<<"Enter letter A/a: ";
    cin>>character;
    cout<< checkAlphabetCase(character);

}
string checkAlphabetCase(char ch)
{
    if(ch == 65)
    {
        
        string s = "You have entered capital A";
        return s;
    }
    else
    {
        string  s = "you have entered small a";
        return s;
        

    }
}