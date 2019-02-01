#include<bits/stdc++.h>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
using namespace std;
string remove_dupli(string s){
	int i;
	fo(i,0,s.length()){
		int j=i+1;
		while(j<s.length()){
			if(s[i]==s[j])
				s.erase(j,1);
			else
				j++;
		}
	}
	return s;
}
int main(){
	vs s;
	int n,i;cin>>n;
	vs v(n);
	fo(i,0,n){
		cin>>v[i];
		sort(all(v[i]));
		v[i]=remove_dupli(v[i]);
		s.push_back(v[i]);
	}
	int count=1;
	 sort(all(s));
	 fo(i,0,n-1)
	 	if(s[i]!=s[i+1])
	 		count++;
cout<<count;
}