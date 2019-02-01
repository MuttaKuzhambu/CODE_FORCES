//STUDIES\CODE_FORCES\Contest\1097
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pll pair<long long,long long>
#define vll vector<long long>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
#define F first
#define S second
using namespace std;
ll n;
vll a;
bool brute(ll i,ll value){
if(i==n)
	if(value%360==0)
		return true;
	else return false;
	return (brute(i+1,value+a[i])||brute(i+1,value-a[i]));
}
int main(){
ll i;cin>>n;
a.resize(n);
fo(i,0,n) cin>>a[i];
if(brute(0,0))
cout<<"YES";
else cout<<"NO";
return 0;
}