
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n,a;cin>>n;
	set <ll> arr;
	for(ll i=0;i<n;i++){
		cin>>a;	
		arr.insert(a);
		//cout<<*arr.end();
	}
	
	if(arr.size()>3)
		cout<<"NO";
	
	else if(arr.size()<3)
		cout<<"YES";
	else{
			set<ll>::iterator i=arr.begin();

		std::vector<ll> ans;
		while(i!=arr.end()){
			ans.push_back(*i);
			i++;
		}
		if(ans[1]-ans[0]==ans[2]-ans[1])
			cout<<"YES";
		else
			cout<<"NO";
	}
	 getchar();
	return 0;
}