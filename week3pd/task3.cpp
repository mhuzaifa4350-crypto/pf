#include <iostream>
using namespace std;
main()

{
int Vi, acceleration, time,Vf;

 cout<<"Enter Initial Velocity (m/s):";
 cin>>Vi;
 
 cout<<"Enter Acceleration (m/s^2):";
 cin>>acceleration;

 cout<<"Enter Time(s):";
 cin>>time;
 
 Vf=Vi+(acceleration*time);

cout<<"Final Velocity (m/s): "<<Vf;

}


