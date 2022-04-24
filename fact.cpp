#include <cstring>
#include <iostream>
#include <cstdlib>
#define ll long long
using namespace std;
int fact[10001][10000] = {0};
void fact_large(int n)
{
    int i;
    fact[1][0] = 1;
    fact[1][1] = 1;
    if (fact[n][0] == 0) 
    {
        for (i = n - 1; i > 0 ; i--) 
        {
            if (fact[i][0] != 0)
                break;
        }
        for ( ; i < n; i++) 
        {
            int j = 1;
            int carry = 0;
            int len = fact[i][0];
            while (len--)
            {
                int temp = (i + 1) * fact[i][j] + carry;
                fact[i + 1][j] = temp % 10;
                carry = temp / 10;
                j++;
            }
            while (carry > 0) 
            {
                fact[i + 1][j] = carry % 10;
                carry /= 10;
                j++;
            }
            fact[i + 1][0] = j - 1;
        }
    }
    for (i = fact[n][0]; i > 0; i--) 
    {
        cout << fact[n][i];
    }
    cout<<endl;
}

int main()
{
    int n,t;
     cout<<"Enter The Number \n";
        cin>>n;
        fact_large(n);
    return 0;
    
}
