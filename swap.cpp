#include <iostream>
using namespace std;

int main()
{
    int first,second;
    
 cout<<"Enter The First And Second Variable :\n\n";
    cin>>first>>second;
    
 first=first+second;
    second=first-second;
    first=first-second;
    
 cout<<"\nFirst Number is = "<<first<<"\nSecond Number Is = "<<second<<endl;
    return 0;

}
