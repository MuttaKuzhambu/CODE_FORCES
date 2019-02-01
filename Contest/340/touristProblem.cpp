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
int main(){
	ll n,i,cnt=0,sum=0; cin>>n;
	vll a(n);
	fo(i,0,n) cin>>a[i];
	sort(all(a));
	fo(i,1,n+1){
		sum+=(4*i-2*n-1)*a[i-1];
		cnt++;
	}
	//cout<<sum<<endl;
	ll gcd=__gcd(sum,cnt);
	cout<<sum/gcd<<" "<<cnt/gcd<<endl;
	return 0;
}