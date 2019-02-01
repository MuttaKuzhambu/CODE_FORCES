#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
using namespace std;
string s,t;
void swap(int i){
	char a=s[i];
	s[i]=s[i+1];
	s[i+1]=a;
}
int main(){
	int n,i,j,k;cin>>n;
	vector<int> ans;
	cin>>s>>t;
	if(s==t){
		cout<<"0"<<endl;
		return 0;
	}
//cout<<endl;
	fo(i,0,n){
		for(j=n-1;j>i;j--){
			if(t[i]==s[j]){
				if(i!=j){
					for(k=j;k>i;k--){
						//cout<<k<<endl;
						ans.push_back(k);
						swap(k-1);
						//cout<<s<<endl;
					}
				}
			}
		}
}
if(s!=t){
	cout<<"-1";
	return 0;
}
//cout<<s;

	cout<<ans.size()<<endl;
	fo(i,0,ans.size()){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;

}