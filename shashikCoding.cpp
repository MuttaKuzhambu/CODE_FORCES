#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;cin>>n>>k;
	int mini=k+1,maxi=2*k+1;
	int steps=(n-1)/maxi+1;
	cout<<steps<<endl;
	int f=n%maxi,diff;
	if(f==0)
		 diff=1+k;
	else if(f<=mini)
		diff=1;
	else
		diff=1+f-mini;
	cout<<diff<<" ";
	steps--;
	while(steps--){
		diff+=maxi;
		cout<<diff<<" ";
	}
}