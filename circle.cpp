#include<iostream>
using namespace std;
int main()
{
  int rad;
  float PI = 3.14, area, ci;
  cout<<"Enter radius of circle: ";
  cin>>rad;
  area = PI * rad * rad;
  cout<<"Area of circle "<< area<<endl;
  ci = 2 * PI * rad;
  cout<<"Circumference of circle "<< ci<<endl;
  return (0);
}

