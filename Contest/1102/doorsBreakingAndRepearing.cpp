//STUDIES\CODE_FORCES\Contest\1102
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
	ll i,m,a,b,count=0;cin>>m>>a>>b;
	vll arr(m);
	fo(i,0,m) cin>>arr[i];
	sort(all(arr));
	if(a>b){
		cout<<m<<endl;
		return 0;
	}

	fo(i,0,m){
		if(arr[i]<=a){
			count++;
			i++;
		}
		else
			break;
	}
	cout<<count<<endl;
	return 0;
}