#include<bits/stdc++.h>
using namespace std;
int main(){
	long n,k;
	cin>>n>>k;
	vector<long> w(n);
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	//sort(w.begin(),w.end());
	long long day=0;
	
	for(int i=0,j=0;i<n && j<n;){
		while(w[i]==0)
		i++;
	if(w[i]!=0)
		w[i]-=min(w[i],k);
	while(w[j]==0)
		j++;	
		if(w[j]!=0)
		w[j]-=min(w[j],k);

	day++;
	}
	cout<<day;
	return 0;
}