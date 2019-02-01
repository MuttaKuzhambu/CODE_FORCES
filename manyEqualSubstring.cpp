#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	string t,s;
	cin>>t;
	if(t[n-1]==t[0])
			s=t.substr(0,n-1);
	
	else
		s=t;
	for(int i=1;i<k;i++)
	t+=s;
cout<<t<<endl;
	getchar();
	return 0;
}