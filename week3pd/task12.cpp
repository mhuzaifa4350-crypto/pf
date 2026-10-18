#include<iostream>
using namespace std;
main()
{   
 int n,w,h,paint;

 cout<<"Number of square meters: ";
 cin>>n;

 cout<<"Width of the single wall (in meters):";
 cin>>w;

 cout<<"Height of the single wall (in meters):";
 cin>>h;

  paint = n/(w*h);

  cout<<"Number of walls you can paint:"<<paint;


}