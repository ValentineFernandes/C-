#include<iostream>
using namespace std;
int main()
{
    double num1, num2, num3;
    cout<<"Enter Three Numbers: ";
    cin>>num1>>num2>>num3;

    if (num1>=num2)
    {
        if(num1>=num3)
            cout<<num1<<" Is The Largest Number. ";
        else
            cout<<num3<<" Is The Largest Number. ";
    }
    else
    {
        if(num2>=num3)
            cout<<num2<<" Is The Largest Number. ";
        else
            cout<<num3<<" is the largest number.";
    }
    
    return 0;

}
