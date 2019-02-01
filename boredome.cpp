#include<bits/stdc++.h>
using namespace std;
int main(){
	int maxi=100001;
	int n;
	vector<int>a(n);
	vector<int>count(maxi,0);
	for(int i=0;i<n;i++){cin>>a[i];count[i]++;}
	vector<int>dp(maxi,0);
	dp[0]=0;
	dp[1]=count[1];
	for(int i=2;i<dp.size();i++){
	dp[i]=max(count[i]*i+dp[i-2],dp[i-1]);
	}
	cout<<dp[dp.size()-1];
	getchar();
	return 0;
	
}
