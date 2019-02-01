//STUDIES\CODE_FORCES\Contest\259
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
cin>>s;
ll n=s.length(),i;
bool flag=false;
fo(i,0,n){
	if(s[i]=='0'){
		flag=true;
		s.erase(i,1);
		break;
	}
}
if(!flag)
s.erase(0,1);
cout<<s;
return 0;
}