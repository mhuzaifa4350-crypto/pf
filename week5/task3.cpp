#include<iostream>
using namespace std;
void projectTimeCalculation(int hours, int workers , int days);
main()
{
    int hours1, workers1, days1;
    projectTimeCalculation(hours1,workers1,days1);

}
void projectTimeCalculation(int hours, int workers , int days)
{
    cout<<"Enter needed hours ";
    cin>>hours;
    cout<<"Enter number of workers ";
    cin>>workers;
    cout<<"Enter number of days ";
    cin>>days;
    int h = days*90*10*workers/100;
    if(h >= hours)
    {
        cout<<"Yes "<<h-hours<<" hours left";
    }
    if(h<hours)
    {
        cout<<"Not enough time! "<<hours - h<<" hours needed";
    }

}