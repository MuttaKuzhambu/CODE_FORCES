#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll a,b,c,i;
	cin>>a>>b>>c;
	bool flag=false;
	for(i=0;i<=c/a;i++){
		if((c-i*a)%b==0){
			flag=true;
			break;
		}
	}
	(flag)?cout<<"Yes":cout<<"No";
	return 0;

}