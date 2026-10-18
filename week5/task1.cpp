#include<iostream>
using namespace std;
void volume(float l, float w, float h, string unit);
main()
{
    float length, width, height;
    string unit1;
  volume(length, width, height, unit1);
}
void volume(float l, float w, float h, string unit)
{
    cout<<"Enter length(in metres): ";
    cin>>l;
    cout<<"Enter width(in metres): ";
    cin>>w;
    cout<<"Enter height(in metres): ";
    cin>>h;
    cout<<"Enter desired output unit(centimetres , milimetres, kilometres, metres): ";
    cin>>unit;
    if(unit == "centimetres")
    {
        cout<<"Volume of pyramid: "<<l*w*h*100/3<<" cubic centimetres";
    }
     if(unit == "metres")
    {
        cout<<"Volume of pyramid: "<<l*w*h/3<<" cubic metres";
    }
     if(unit == "kilometres")
    {
        cout<<"Volume of pyramid: "<<(l*w*h)/(3*1000)<<" cubic kilometres";
    }
     if(unit == "milimetres")
    {
        cout<<"Volume of pyramid: "<<l*w*h*1000/3<<" cubic milimetres";
    }
}