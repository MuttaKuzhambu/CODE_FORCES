#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,j;
	set<int> a;
	for(int i=0;i<n;i++){
		cin>>j;
		if(j!=0)
			a.insert(j);
	}
	cout<<a.size();
	getchar();
	return 0;
}