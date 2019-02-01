#include<bits/stdc++.h>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
using namespace std;
int main(){
	string a,b,c;
	cin>>a>>c;
	int n=a.length(),i;
	fo(i,0,n){
		if(a[i]<c[i]){
			cout<<"-1";
			return 0;
		}
	}
	cout<<c<<endl;
	return 0;
}