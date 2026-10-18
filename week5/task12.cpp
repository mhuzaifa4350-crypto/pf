#include<iostream>
using namespace std;
string timeTravel(int hour, int minute);
main()
{
    int h, m;
    cout<<"Enter hours ";
    cin>>h;
    cout<<"Enter minutes ";
    cin>>m;
    cout<<timeTravel(h,m);

}
string timeTravel(int hour, int minute)
{
   int totalMinutes = hour*60 + minute;
   int totalfutureMinutes = totalMinutes + 15;
   int futureHours = totalfutureMinutes/60;
   int futureMinutes = totalfutureMinutes - futureHours*60;
   if(futureHours == 24)
   {
    futureHours =0;
   }

   
   return to_string (futureHours) + " : " + to_string (futureMinutes);
}