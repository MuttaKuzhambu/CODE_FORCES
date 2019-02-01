//STUDIES\CODE_FORCES\Contest\1091
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define test cout<<endl<<"found!"<<endl
#define all(a) a.begin(),a.end()
ll i;
using namespace std;
int main(){
	ll y,r,b,sol;
	cin>>y>>b>>r;
	fo(i,0,y+1){
		if(b<i+1 || r<i+2) break;
		sol=max(sol,3*i+3);
	}
	cout<<sol<<endl;
	return 0;

}