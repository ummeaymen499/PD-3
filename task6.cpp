#include<iostream>
using namespace std;
main(){
cout<<"Enter the size of the fertilizer bag in pounds: ";
float p;
cin>>p;
cout<<"Enter the cost of the bag: $";
float c;
cin>>c;
cout<<"Enter the area in square feet that can be covered by the bag: ";
float a;
cin>>a;
float costperpound;
costperpound=c/p;
float costpersquarefoot;
costpersquarefoot=c/a;
cout<<"Cost of fertilizer per pound: $"<<costperpound<<endl;
cout<<"Cost of fertilizing per square foot: $"<<costpersquarefoot<<endl;

}