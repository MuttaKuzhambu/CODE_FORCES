//STUDIES\CODE_FORCES\Contest\1101
#include<bits/stdc++.h>
#define ld long double
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
	ll n,i;cin>>n;
	fo(i,0,n){
		ll l,r,d;
		cin>>l>>r>>d;
		
		//cout<<ceil(l/d)<<endl;
		if(ceil(l/d)>1){
				cout<<d<<endl;}
		else cout<<floor(r/d)*d + d<<endl;
		
		/*if(d<l)
			cout<<d<<endl;
		else if(d>r)
			cout<<d<<endl;
		else
			cout<<(r+d)-(r%d)<<endl;
	*/}
}
