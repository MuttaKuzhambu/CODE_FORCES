#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;cin>>n;
	for(a=1;a<=n;a++){
		for(b=n;b>=1;b--){
			if(a%b==0 && (a*b)>n && (a/b)<n){
				cout<<a<<" "<<b;
				return 0;
			}
		}
	}
	cout<<-1;
	return 0;
}