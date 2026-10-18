#include<iostream>
using namespace std;
string pollfill(int volume, int p1, int p2, float hour);
main()
{
    int v,pipe1,pipe2;
    float h;
    cout<<"Enter volume of pool: ";
    cin>>v;
    cout<<"Enter flow rate of pipe 1: ";
    cin>>pipe1;
    cout<<"Enter volume of pipe 2: ";
    cin>>pipe2;
    cout<<"How many hours worker remains absent: ";
    cin>>h;
    cout<<pollfill(v,pipe1,pipe2,h);

}
string pollfill(int volume, int p1, int p2, float hour )
{
  int totalWater = p1*hour + p2*hour;
  if(totalWater <= volume)
  {
    int fillPercentage = totalWater*100/volume;
    int p1contri = p1*hour*10/fillPercentage;
    int p2contri = p2*hour*10/fillPercentage;
    string  s = "The pool is " + to_string(fillPercentage) + "% fill \n";
     string b = "Contribution of pipe 1 is: " + to_string(p1contri) + "% \n";
     string c = "Contribution of pipe 2 is: " + to_string(p2contri) + "%";
     return s+b+c;
  }
  else
  {
     int overFlow = totalWater - volume;
    string m = "for "+ to_string(hour) +" hours pool overflows with "+ to_string(overFlow) +" liters";
    return m;
}
}