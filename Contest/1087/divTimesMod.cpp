#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,result;
	cin>>n>>k;
	int a=k-1;
	int g=n/a;
	if(g!=0)
	{
	    while(n%a!=0)
	    a--;
	    g=n/a;
	    result=g*k+a;
	}
	else
	
	    result=n+k;
	
	cout<<result;
	return 0;
}