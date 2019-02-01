#include<bits/stdc++.h>
#define ll long long
#define vll vector<long long>
using namespace std;
int main(){
	ll y,k,n,x;cin>>y>>k>>n;
	x=k-y;
	bool found=false;
	if(y>=n){cout<<-1;return 0;}

	while(x<1)
		x+=k;

	
	while(x<=n-y){
		found=true;
		cout<<x<<" ";
		x+=k;
	}
	if(found==false){
		cout<<-1;
	}
}