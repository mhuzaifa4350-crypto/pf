#include <iostream>
using namespace std;
void pass();
void fail();
main()
{
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks>=50){
        pass();
    }
    if(marks<50){
        fail();
    }


} 
void pass()
{cout<<" Pass ";}
void fail()
{cout<<" Fail ";}

