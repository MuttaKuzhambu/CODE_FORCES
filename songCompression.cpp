#include<bits/stdc++.h>
using namespace std;
#define  ll long long 
int main(){
	 ll n,m,sum=0,count=0;
	cin>>n>>m;
	std::vector<ll> a(n),b(n),diff(n);
	for(ll i=0;i<n;i++){
		cin>>a[i]>>b[i];
		sum+=a[i];
		diff[i]=a[i]-b[i];
	}
	if(sum<=m){
		cout<<0;
		return 0;
	}
	sort(diff.begin(),diff.end());
	for(ll i=n-1;i>=0;i--){
		sum-=diff[i];
		count++;
		if(sum<=m){
			cout<<count;
			return 0;
		}
	}
	cout<<"-1";
	getchar();
	return 0;
}