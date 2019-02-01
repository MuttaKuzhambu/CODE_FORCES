//STUDIES\CODE_FORCES\Contest\1108C
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
	ll n,i;cin>>n;
string s;cin>>s;
string t="RGB",a;
ll al=1e9,cnt;

while(next_permutation(all(t))){
	//cout<<t<<endl;
	cnt=0;
	fo(i,0,n){
		if(s[i]!=t[i%3])
			cnt++;
	}
	if(cnt<al){
		al=cnt;
		a.erase();
		a=t;
	}
	
}
cout<<al<<endl;
fo(i,0,n){
	cout<<a[i%3];
}
return 0;
}