#include <iostream>
using namespace std;
main()

{  
int i,p,chances;


 cout<<"Enter Imposter count:";
 cin>>i;

 cout<<"Enter Player Count:";
 cin>>p;

 chances= 100 * i/p;

 cout<<"Chances of being imposter:"<<chances<<"%";

}