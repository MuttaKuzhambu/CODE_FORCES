//STUDIES\CODE_FORCES\Contest\1087
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define pll pair<long long,long long>
#define F first
#define S second
#define pb push_back
#define all(a) a.begin(),a.end()
#define mp make_pair
using namespace std;
bool cmp(pll a, pll b){
	if(a.F==b.F)
		return a.S<b.S;
	return a.F<b.F;
}
int main(){
ll i,maxX,maxY,minX,minY;
pll pnts(3);
fo(i,0,3)
	cin>>pnts[i].F>>pnts[i].S;
sort(pnts.begin(),pnts.end(),cmp);
ll ans=0;
pll anss;
fo(i,pnts[0].F,pnts[1].F+1)
	anss.pb(mp(i,pnts[0].S));
minY=min(pnts[0].S,min(pnts[1].S,pnts[2].S));
maxY=max(pnts[0].S,max(pnts[1].S,pnts[2].S));
fo(i,minY,maxY+1)
	anss.pb(mp)

}