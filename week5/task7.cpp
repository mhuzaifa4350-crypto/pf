#include<iostream>
#include<cmath>
using namespace std;
void height(float base, float angle);
main()
{
float b,ang;
height(b,ang);
}
void height(float base, float angle)
{
    cout<<"Enter the distance from base of tree(in feet) :";
    cin>>base;
    cout<<"Enter angle of elevation(in degrees) :";
    cin>>angle;
    angle = angle/57.2958;
    float height = tan(angle)*base;
    cout<<"Height of tree is "<<height;

}