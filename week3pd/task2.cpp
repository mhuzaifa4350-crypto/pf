
#include <iostream>
using namespace std;
main()

{ 
  int minutes,frames,total;

  cout<<"Number of Minutes:";
  cin>> minutes;

  cout<<"Frames per second:";
  cin>>frames;

 total=minutes*60*frames;

 cout<<"Total number of Frames:"<<total;

}