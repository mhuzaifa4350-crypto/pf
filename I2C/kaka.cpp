#include<iostream>
using namespace std;
main()
{
int days;
float dollars,exchange;
cout<<"enter working days per month:";
cin>>days;
cout<<"Enter Earned dollars:";
cin>>dollars;
cout<<"Enter exchange rate from usd to pkr:";
cin>>exchange;

float salarypermonth;
salarypermonth=days*dollars;

float salaryperyear;
salaryperyear=salarypermonth*12;

float bonus;
bonus=salarypermonth*2.5;

float annualsalary;
annualsalary= salaryperyear+bonus;

float salaryaftertax;
salaryaftertax=annualsalary- (annualsalary*25/100);

float salaryinpkr=salaryaftertax*exchange;
float dailyearning= salaryinpkr/365;
cout<<"Daily Earnings in Pkr:"<<dailyearning;

}