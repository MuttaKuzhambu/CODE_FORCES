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
int main(){
	ll n,i,cnt=0,pcnt=0;cin>>n;
	vll a(n);
	fo(i,0,n)cin>>a[i];
	fo(i,1,n){
		while(a[i]>a[i-1]){
			if(i==n)
				break;
			pcnt++;
			cnt=max(pcnt,cnt);i++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}