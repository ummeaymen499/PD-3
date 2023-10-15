#include<iostream>
using namespace std;
main(){
cout<<"Enter the movie name: ";
string name;
cin>>name;
cout<<"Enter the adult ticket price: $";
float price;
cin>>price;
cout<<"Enter the child ticket price: $";
float cprice;
cin>>cprice;
cout<<"Enter the number of adult tickets sold: ";
int sold;
cin>>sold;
cout<<"Enter the number of child tickets sold: ";
int csold;
cin>>csold;
cout<<"Enter the percentage of the amount to be donated to charity: ";
float percent;
cin>>percent;
cout<<""<<endl;
float total;
total=sold*price+csold*cprice;
float donation;
donation=total/percent;
float remain;
remain=total-donation;
cout<<"Movie: "<<name<<endl;
cout<<"Total amount generated from ticket sales: $"<<total<<endl;
cout<<"Donation to charity (" <<percent<< "%): $"<<donation<<endl;
cout<<"Remaining amount after donation: $"<<remain<<endl;
}