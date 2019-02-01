#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n,m;cin>>n>>m;
	string s,t;cin>>s>>t;
	vector<ll> temp;
	vector<ll> v;
	int min=INT_MAX;
	for(ll i=0;i<=m-n;i++){
		for(ll j=0;j<n;j++){
			if((s[j]!=t[i+j]))
				temp.push_back(j+1);
			
		}
		if(temp.size()<min){
			min=temp.size();
			v=temp;
		}
		temp.clear();
	}
	cout<<v.size()<<endl;
	for(ll i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}