#include<iostream>
using namespace std;
main(){
cout<<"Enter vegetable price per kilogram (in coins): ";
float kinc;
cin>>kinc;
cout<<"Enter fruit price per kilogram (in coins): ";
float finc;
cin>>finc;
cout<<"Enter total kilograms of vegetables: ";
float kg;
cin>>kg;
cout<<"Enter total kilograms of fruits: ";
float kgf;
cin>>kgf;
float rsofveg;
rsofveg=kinc*kg;
float rsoffru;
rsoffru=finc*kgf;
float final;
final=rsofveg+rsoffru;
float final_;
final_=final/1.94;
cout<<"Total earnings in Rupees (Rps): "<<final_;
}
 