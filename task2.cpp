#include<iostream>
using namespace std;
main(){
cout<<"Number of Minutes: ";
int min;
cin>>min;
int sec;
sec=min*60;
cout<<"Frames per Second: ";
int frame;
cin>>frame;
int total;
total=sec*frame;
cout<<"Total Number of Frames: "<<total;
}