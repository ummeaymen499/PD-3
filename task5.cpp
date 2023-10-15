#include<iostream>
using namespace std;
main(){
cout<<"Enter the Name of the Person: ";
string p;
cin>>p;
cout<<"Enter the target weight loss in kilograms: ";
float t;
cin>>t;
float days;
days=t*15;
cout<<p<<" will need "<<days<<" days to lose "<<t<<" kg of weight by following the doctor's suggestions";

}