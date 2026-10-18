#include <iostream>
using namespace std;
main()

{
 string name;
 float weight,days;
 
 
 cout<<"Enter the name of the person:";
 cin>>name;

 cout<<"Enter the target weight loss in kilograms:";
 cin>>weight;
  
  days= weight * 15;
 

 cout <<name <<" will need " <<days 
      << " days to lose " << weight
      << " kg of weight by following doctor's suggestion.";

}