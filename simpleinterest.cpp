#include<iostream>
using namespace std;
int main()
{ 
   float amount, rate, time, si;

   cout<<"\nEnter Principal Amount : ";
   cin>>amount;

   cout<<"\nEnter Rate of Interest : ";
   cin>>rate;

   cout<<"\nEnter Period of Time   : ";
   cin>>time;

   si = (amount * rate * time) / 100;
   cout<<"\nSimple Interest : "<< si<<endl;

   return(0);

}
