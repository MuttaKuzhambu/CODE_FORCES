#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	cin>>n>>k;
	vector<long> a(n);
	for(long i=0;i<n;i++)
		cin>>a[i];
		long j=1;
	while(true){
		if(k-j>0){
			k-=j;
			j++;
		}
		else
			break;
	}
	cout<<a[k-1];
	getchar();
	return 0;
}