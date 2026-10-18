#include<iostream>
#include<cmath>
using namespace std;
float discriminant(int a, int b, int c);
main()
{
    int a1, b1, c1;
    cout<<"Enter value of a: ";
    cin>>a1;
    cout<<"Enter value of b: ";
    cin>>b1;
    cout<<"Enter value of c: ";
    cin>>c1;
    discriminant(a1,b1,c1);

}
float discriminant(int a, int b, int c)
{
   float disc = b*b - 4*a*c;
    if(disc > 0)
    {
        cout<<"Two real roots \n";
        cout<<"Root1 ="<<(-b + sqrt(disc))/(2*a);
        cout<<endl;
        cout<<"Root2 ="<<(-b - sqrt(disc))/(2*a);
    }
    else if(disc == 0)
    {
        cout<<"Root1 = Root2 = "<<-b/(2*a);
    }
    else
    {
        cout<<"Two complex roots \n";
        cout<<"Root1 ="<<-b/(2*a) <<" + " << sqrt(4*a*c - b*b)/(2*a)<<"i";
        cout<<endl;
        cout<<"Root2 ="<<-b/(2*a) <<" - " << sqrt(4*a*c - b*b)/(2*a)<<"i";
    }
}