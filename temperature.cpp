#include<iostream>
using namespace std;
int main()
{
 float cel, fah;
 cout<<"\nEnter Temp in Celsius : ";
 cin>>cel;
 fah = (1.8 * cel) + 32;
 cout<<"\nTemperature in Fahrenheit : "<< fah;
 return (0);
}
