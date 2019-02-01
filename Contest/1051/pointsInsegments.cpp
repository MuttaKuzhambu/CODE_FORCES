#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
using namespace std;
int main(){
	int n,m,i,l,r;cin>>n>>m;
	vector<int> a(m+1,0);
	fo(i,0,n){
		cin>>l>>r;
		a[l]++;
		if(r==m)
			continue;
		a[r+1]--;
	}
	fo(i,1,m+1)
		a[i]+=a[i-1];
	vector<int> ans;
	fo(i,1,m+1)
		if(a[i]==0)
			ans.push_back(i);
		
	
	cout<<ans.size()<<endl;
	if(ans.size()==0)
		return 0;
	fo(i,0,ans.size())
		cout<<ans[i]<<endl;
	return 0;
}