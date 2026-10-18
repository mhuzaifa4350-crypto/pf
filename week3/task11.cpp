#include <iostream>
using namespace std;
main()

{
int population,birth;

cout<<"Enter the current world population:";
cin>>population;

cout<<"Enter the monthly birth rate (number of births per month):";
cin>>birth;

 population=population + (birth *30 *12);

cout<<"The population in 3 decades will be:"<<population;

}




