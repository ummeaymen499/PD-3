#include<iostream>
using namespace std;
void add(int a,int b)
{
int sum;
sum=a+b;
cout<<"Sum is: "<<sum;
}
main()
{
int a,b;
cout<<"Enter first int: ";
cin>>a;
cout<<"Enter sec int: ";
cin>>b;
add(a,b);

}