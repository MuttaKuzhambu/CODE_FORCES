#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=0,min=100001;
    cin>>n;
	vector<int> ar(n);
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	}
	sort(ar.begin(),ar.end());
	int a=ar[n-1]-ar[1];
	int b=ar[n-2]-ar[0];
	if(a>b)
	    cout<<b;
	else
	    cout<<a;
	
	return 0;
}