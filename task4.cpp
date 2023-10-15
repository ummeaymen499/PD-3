#include<iostream>
using namespace std;
main(){
cout<<"Enter Imposter Count: ";
int c;
cin>>c;
cout<<"Enter Player Count: ";
int p;
cin>>p;
int chance;
chance=100*c/p;
cout<<"Chance of being an imposter: "<<chance<<"%";
}