//STUDIES\CODE_FORCES\Contest\1108B
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
	ll n,i,gcd=-1;cin>>n;
	vll a(n);
	fo(i,0,n) cin>>a[i];
	sort(all(a));
	fo(i,0,n){
		if(a[i]==a[i+1]){
			gcd=max(gcd,a[i]);
		}
	}
	cout<<a[n-1]<<" ";
	for(i=n-2;i>=0;i--){
		if(__gcd(a[n-1],a[i])==gcd){
			cout<<a[i]<<endl;
			return 0;
		}
	}
	cout<<"1";
	return 0;
}