#include <iostream>
using namespace std;

int main ()
{
   int  first,sec;
   
   cout<<"Enter The Value Of First and Second Variable \n\n";
   cin>>first>>sec;

   cout << "Address Of First Variable :\n\n";
   cout << &first <<"\n";

   cout << "\nAddress Of Second Variable :\n\n";
   cout << &sec << endl;

   return 0;
}
