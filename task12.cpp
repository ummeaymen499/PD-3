#include<iostream>
using namespace std;
main(){
cout<<"Number of square meters you can paint: ";
int squaremeters;
cin>>squaremeters;
cout<<"Width of the single wall (in meters): ";
int width;
cin>>width;
cout<<"Height of the single wall (in meters): ";
int height;
cin>>height;
int area;
area=width*height;
int final;
final=squaremeters/area;
cout<<"Number of walls you can paint: "<<final;
}
