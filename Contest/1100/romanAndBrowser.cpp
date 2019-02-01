//STUDIES\CODE_FORCES\Contest\1100A
#include<bits/stdc++.h>
#define ll long long
#define vb vector<bool>
#define vi vector<int>
#define vs vector<string>
#define pll pair<long long,long long>
#define vll vector<long long>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
#define F first
#define S second
using namespace std;
int main(){
ll n,k,i,j,l;cin>>n>>k;
vll a(n);
vector<bool> visited(n,false);
fo(i,0,n) cin>>a[i];
ll pcnt=0,mcnt=0,prem=0,mrem=0;
fo(i,0,n) 
if(a[i]==-1)mcnt++;
else pcnt++;
if(pcnt==n || mcnt==n){
	cout<<n<<endl;
	return 0 ;
}
ll ans=-1;
fo(i,0,k){
	mrem=0,prem=0;
	for(j=i;j<n;j+=k){
		if(a[j]==1)
			prem++;
		else
			mrem++;
	}
ans=max(ans,abs((pcnt-prem)-(mcnt-mrem)));
//cout<<i<<" "<<(pcnt-prem)<<" "<<(mcnt-mrem)<<" "<<ans<<endl;
}
cout<<ans<<endl;
return 0;
}