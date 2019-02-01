#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n,k;
	cin>>n>>k>>s;
	vector<int> count(26,0);
	for(int i=0;i<n;i++){
	count[s[i]-65]++;
	}
	int min=INT_MAX;
	for(int i=0;i<k;i++){
	if(count[i]==0){
	cout<<"0";
		return 0;
	}
	if(count[i]<min)
		min=count[i];
	}
	
	cout<<k*min;
	return 0;
	}