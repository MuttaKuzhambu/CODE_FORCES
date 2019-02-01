#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a(m);
	for(int i=0;i<m;i++)
	cin>>a[i];
	sort(a.begin(),a.end());
	int result=INT_MAX;
	for(int i=0;i<=m-n;i++){
		//cout<<a[i+n-1]-a[i]<<endl;
		if(result>(a[i+n-1]-a[i]))
				result=a[i+n-1]-a[i];
	}
	cout<<result;
}
