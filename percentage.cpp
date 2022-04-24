#include<iostream>
using namespace std;
int main()
{
   int sub,marks,n,i,sum=0,tmp=0,arr[10],Percentage;
   cout<<"\nEnter number of subject : \n";
   cin>>n;
   tmp=n*100;
   cout<<"\nEnter The Marks: \n";
   for(i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   for(i=0;i<n;i++)
   {
    sum=sum+arr[i];
   } 
   
   Percentage = ( sum * 100 ) / tmp;
   
   cout<<"\nPercentage Of Student : \n"<< Percentage<<endl;

   return (0);
}
