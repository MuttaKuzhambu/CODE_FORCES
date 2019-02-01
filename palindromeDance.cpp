#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b;
cin>>n>>a>>b;
vector<int> dress(n);
for(int i=0;i<n;i++)
	cin>>dress[i];
	int cost=0;
for(int i=0;i<n/2;i++){
	if(dress[i]==dress[n-i-1]){
		if(dress[i]==2)
				cost+=2*min(a,b);
		else
			continue;
	}
	else if((dress[i]==0 && dress[n-i-1]==2) || (dress[i]==2 && dress[n-i-1]==0) )
		cost+=a;
	else if((dress[i]==1 && dress[n-i-1]==2) || (dress[i]==2 && dress[n-i-1]==1) )
		cost+=b;

		else {
			cout<<"-1";
			return 0;
		}
}
if((n&1) && dress[n/2]==2){
cost+=min(a,b);
}
else if (dress[n/2]==2 && dress[n/2+1]==2)
cost+=min(a,b);

cout<<cost;
getchar();
	return 0;
}