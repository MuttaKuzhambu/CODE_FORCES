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
	ll i,j,bcnt,wcnt;
fo(i,0,8){
	string s;
	cin>>s;
	bool flag=false;
	ll cnt=0;
	while(s!="BWBWBWBW" && s!="WBWBWBWB" && cnt<8){
		rotate(s.begin(),s.begin()+1,s.end());
		cnt++;
	}
	if(cnt>=8){
		cout<<"NO";
		return 0;
	}
}
cout<<"YES";
return 0;
}