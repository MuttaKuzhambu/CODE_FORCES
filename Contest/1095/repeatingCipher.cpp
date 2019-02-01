//STUDIES\CODE_FORCES\Contest\1095
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
using namespace std;
int main(){
	int n,i=0,skip=0;cin>>n;
	string s,ans;cin>>s;
	while(i<n){
		ans+=s[i];
		skip++;
		i+=skip;
	}
	cout<<ans;
}