#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,j;
    cin>>n;
    for(j=9;j>=1;j--)
    {
        if(n%j==0)
        {
            break;
        }
    }
    int r=n/j;
    cout<<r<<endl;
    for(int k=0;k<r;k++)
    cout<<j<<" ";
    return 0;
}