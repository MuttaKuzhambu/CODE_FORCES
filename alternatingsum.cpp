#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define mod 10000000009
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
using namespace std;
int main(){
	ll i,n,a,b,k;cin>>n>>a>>b>>k;
	string s;cin>>s;
	ll sum=0;
	fo(i,0,n){
		if(s[i]=='+')
		sum+=pow(a,n-i)*pow(b,i);
	else
		sum-=pow(a,n-i)*pow(b,i);
	}
	cout<<sum%mod;
}