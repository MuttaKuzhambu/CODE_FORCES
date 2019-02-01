#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> arr(n);
	while(n--){
	int temp;
	cin>>temp;
	arr.push_back(temp);
	}
	int count=0;
	for(int i=0;i<n;i++){
	while(arr[i]<=m){
	arr[i]=arr[i]-m;
	cout<<count<<" ";
	}
	}
	getchar();
	return 0;
}