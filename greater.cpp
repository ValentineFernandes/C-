#include<iostream>
using namespace std;
int main()
{
    double num1, num2, num3;
    cout<<"Enter Three Numbers: \n";
    cin>>num1>>num2>>num3;

   if (num1 > num2 && num1 > num3)
      cout<<"\nGreatest Number Is :"<<num1;

   else if (num2 > num3 && num2 > num1)
      cout<<"\nGreatest Number Is :"<<num2;

   else if (num1 > num1 && num3 > num2)
      cout<<"\nGreatest Number Is :"<<num1;
      
   else if ((num1==num2) && (num2==num3) && (num3==num1))
     cout<<"\nAll Are Equal"; 
   

}
