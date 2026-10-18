#include<iostream>
using namespace std;
main()
{   

 float vegprice,frprice,rupees;
 int vegetables,fruits;

cout<<"Enter vegetable price per kilogram (in coins):";
cin>>vegprice;

cout<<"Enter fruit price per kilogram (in coins):";
cin>>frprice;

cout<<"Enter total kilograms of vegetables:";
cin>>vegetables;

cout<<"Enter total kilograms of fruits:";
cin>>fruits;

rupees = ((vegprice * vegetables)/1.94)+ ((frprice * fruits)/1.94);



cout<<"Total Earnings in Rupees (Rps): " <<rupees;

}

