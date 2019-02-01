//STUDIES\CODE_FORCES\Contest\340
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
#include<bits/stdc++.h>
using namespace std;
/*
bool comparelen(pll a,pll b){
	if(a.F==b.F)
		return a.S<b.S;
	return a.F<b.F;
}
bool compareHeight(pll a,pll b){
	if(a.S==b.S)
		return a.F<b.F;
	else a.S>b.S;

}*/
int main(){
	ll n,i,j,k,l;cin>>n;
	ld res=0.0000;
	vector<pll> pnts(n);
	fo(i,0,n) cin>>pnts[i].F>>pnts[i].S;
	fo(i,0,n){
		fo(j,1,n){
			fo(k,2,n){
				fo(l,3,n){
					res=max(res,abs((pnts[i].F-pnts[k].F)*(pnts[j].S-pnts[l].S)-(pnts[i].S-pnts[k].S)*(pnts[j].F-pnts[l].F)));
				}
			}
		}
	}
	cout<<res;
//	sort(all(pnts),comparelen);

}