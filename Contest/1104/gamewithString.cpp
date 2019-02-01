//STUDIES\CODE_FORCES\Contest\1104B
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
string s;
ll i,pturn=0;
cin>>s;
stack<char> a;
a.push(s[0]);
fo(i,1,s.length()){

if(!a.empty() && s[i]==a.top())
	{a.pop();
		pturn++;}
else
a.push(s[i]);

}
if(pturn&1) cout<<"YES";
else cout<<"NO";
return 0;
	

}