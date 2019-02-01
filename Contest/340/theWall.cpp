//STUDIES\CODE_FORCES\Contest\340
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
#include<bits/stdc++.h>
using namespace std;
ll gcd(ll a,ll b){
	return b?gcd():a;
}
int main(){
ll f,l,x,y,a,b,i,cnt=0;cin>>x>>y>>a>>b;
ll lcm=(x*y)/gcd(x,y);
cout<<((b/lcm)-((a-1)/lcm))<<endl;
}
