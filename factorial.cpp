#include<iostream>
using namespace std;
int main()
{
 unsigned long long int fact=1;
  int i,num;
  
 cout<<"Enter The Number. You Want Factorial:";
  cin>>num;
  
 for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    
 cout<<"\nFactorial of "<<num<<" Is = "<<fact<<endl;
    return 0;

}
