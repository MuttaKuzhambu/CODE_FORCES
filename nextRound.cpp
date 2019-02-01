#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	int key;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==k-1)
			key=a[i];
	}
	int count=0;
	for(int i=0;i<n;i++){
	if(a[i]>=key && a[i]>0)
		count++;
	}
	cout<<count;
	return 0;
}