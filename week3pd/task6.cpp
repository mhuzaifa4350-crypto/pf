#include <iostream>
using namespace std;
main()
{   
int pounds,cost,area,costperpound,costpersqfoot;

cout<<"Enter the size of the fertilizer bag in pounds:";
cin>>pounds;

cout<<"Enter the cost of the bag:";
cin>>cost;

cout<<"Enter the area in square feet that can be covered by the bag:";
cin>>area;

costperpound = cost/5;

costpersqfoot= costperpound/2;

cout<<"Cost of fertilizer per pound:"<<costperpound <<endl;

cout<<"Cost of fertilizer per square foot:"<<costpersqfoot;

}