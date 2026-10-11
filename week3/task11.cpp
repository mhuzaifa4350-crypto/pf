#include <iostream>
using namespace std;
main()

{
int population,birth;

cout<<"Enter the current world population:";
cin>>population;

cout<<"Enter the monthly birth rate (number of births per month):";
cin>>birth;

birth=birth * 12 * 30;
 population=population + birth;

cout<<"The population in 3 decades will be:"<<population;

}




