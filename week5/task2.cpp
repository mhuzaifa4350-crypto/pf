#include<iostream>
using namespace std;
float taxCalculator(char type, float price);
main()
{
    char type1;
    float price1;
    cout<<"Enter vehicle type code(M, E, S, V, T): ";
    cin>>type1;
    cout<<"Enter price of vehicle: $";
    cin>>price1;
    cout<<"The final price of type "<<type1<< " vehicle after adding tax is: $"<<taxCalculator(type1,price1);

}
float taxCalculator(char type, float price)
{
    
     if(type == 'M')
    {
       float  tax = price*6/100;
       return  price + tax;
    
    }
    if(type == 'E')
    {
       float  tax = price*8/100;
       return  price + tax;
    
    }
     if(type == 'S')
    {
       float  tax = price*10/100;
       return  price + tax;
    
    }
     if(type == 'V')
    {
       float  tax = price*12/100;
       return  price + tax;
    
    }
     if(type == 'T')
    {
       float  tax = price*15/100;
       return  price + tax;
    
    }
    

}