#include <iostream>
using namespace std;
main()

{

string name;
float matric,inter,ecat,aggregate;


cout<<"Enter your name:";
cin>>name;

cout<<"Enter matric marks (out of 1100):";
cin>>matric;

cout<<"Enter inter marks(out of 1200):";
cin>>inter;

cout<<"Enter Ecat marks (out of 400):";
cin>>ecat;

aggregate=((ecat/400)*50)+((matric/1100)*10)+((inter/1200)*40);

cout<<"Aggregate score for "<<name << " is: "<<aggregate;

}
