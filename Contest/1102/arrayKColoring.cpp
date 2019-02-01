#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,d=0,maximum=0;
    cin>>n>>k;
    vector<int> ar(n);
    vector<int> b(5001,0);
    vector<int> cr(5001,0);
    vector<int> c(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        b[ar[i]]++;
    }
    for(int j=1;j<=5000;j++)
    {
        if(b[j]>k)
        {
            cout<<"NO";
            return 0;
        }
        if(b[j]>maximum)
        maximum=b[j];
    }
    // you mother fucker

    for(int i=n-1;i>=0;i--)
    {

        c[i]=b[ar[i]];
        b[ar[i]]--;

    }
    int i=0;
    for(int z=maximum+1;z<=k;z++)
    {
        c[i]=z;
        i++;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
       cout<<c[i]<<" ";
    }
    return 0;
}