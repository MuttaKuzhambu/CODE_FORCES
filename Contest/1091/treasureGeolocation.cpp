//STUDIES\CODE_FORCES\Contest\1091
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pll pair<long long,long long>
#define vll vector<long long>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define test cout<<endl<<"found!"<<endl
#define all(a) a.begin(),a.end()
#define F first
#define S second
using namespace std;
int main(){
	ll n,i,j;cin>>n;
	vector<pll> obs(n),clues(n);
	set<pll> sol;
	fo(i,0,n){
		cin>>obs[i].F>>obs[i].S;
	}
	fo(i,0,n){
		cin>>clues[i].F>>clues[i].S;
	}
	fo(i,0,n){
		fo(j,0,n){
			if(sol.find(make_pair(obs[i].F+clues[j].F,obs[i].S+clues[j].S))!=sol.end()) break;
			sol.insert(make_pair(obs[i].F+clues[j].F,obs[i].S+clues[j].S));
		}
	}
	cout<<endl;
	cout<<"solutions"<<endl;
	for(set<pll>::iterator i=sol.begin();i!=sol.end();i++)
		cout<<i.F<<" "<<i.S<<endl;
	cout<<obs[i].F+clues[j].F<<" "<<obs[i].S+clues[j].S;
	return 0;

}