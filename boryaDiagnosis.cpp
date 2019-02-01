#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long s[n],d[n];
	for(long i=0;i<n;i++)
		cin>>s[i]>>d[i];
	long long day=s[0];
	for(long long i=1;i<n;i++){
		while(day>=s[i])
				s[i]+=d[i];
		day=s[i];

		}
	cout<<day;
	getchar();
	return 0;
}