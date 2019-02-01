#include<bits/stdc++.h>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
using namespace std;
int main(){
	int n,i,m,k;cin>>n>>m>>k;
	vector<int> prices(n);
	fo(i,0,n) cin>>prices[i];
	int min_dist=999;
	fo(i,0,n){
		if(prices[i]!=0){
			if(prices[i]<=k){
				min_dist=min(min_dist,abs(m-i-1));
			}
		}
	}

	cout<<(min_dist)*10;
	return 0;
}