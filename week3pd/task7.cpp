#include<iostream>
using namespace std;
main()
{   
 string name;
 float adultticket,childticket,adticketssold,chticketssold,charity,total,charitypercent,remaining;

 cout<<"Enter the movie name:";
 cin>>name;

 cout<<"Enter the adult ticket price:";
 cin>>adultticket;

 cout<<"Enter the child ticket price:";
 cin>>childticket;

 cout<<"Enter the number of adult tickets sold:";
 cin>>adticketssold;

 cout<<"Enter the number of child tickets sold:";
 cin>>chticketssold;

 cout<<"Enter the percentage of the amount to be donated to charity:";
 cin>>charity;

 total = (adticketssold * adultticket) + (chticketssold * childticket);
 charitypercent = total * charity / 100.0;
 remaining = total - charitypercent;

cout<<"Movie:"<<name<<endl;
cout<<"Total amount generated from ticket sales: "<<total<<endl;
cout<<"Donation to charity (10%):" <<charitypercent<<endl;
cout<<"Remaining amount after donation: "<<remaining<<endl;


}

