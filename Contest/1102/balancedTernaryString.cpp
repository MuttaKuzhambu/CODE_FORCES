//STUDIES\CODE_FORCES\Contest\1102D
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
ll n=(ll)s.length(),i,zero=0,one=0,two=0;
fo(i,0,n){
	if(s[i]=='0')
		zero++;
	else if(s[i]=='1')
		one++;
	else
		two++;
}
}