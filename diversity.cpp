#include<bits/stdc++.h>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
using namespace std;
int main(){
	string s;cin>>s;
	int k,i;cin>>k;
	if(k>s.length()){
		cout<<"impossible";
		return 0;
	}
	set<char> diverse;
	fo(i,0,s.length()){
		diverse.insert(s[i]);
	}
	if(diverse.size()>k){
		cout<<"0"<<endl;
		return 0;
	}
	cout<<k-diverse.size();
}