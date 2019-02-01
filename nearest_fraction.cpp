#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,n,a,b;
	cin>>x>>y>>n;
	int result=x/y;
	for(int i=x;i>0;i--){
		for(int j=y+1;j<n;j++){
		if((x/y-i/j)<result){a=i;b=j;}

	}}
	cout<<a<<"/"<<b;
	getchar();
	return 0;
}