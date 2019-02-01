#include<bits/stdc++.h>
using namespace std;
#define ii pair<int,int>
int main(){

std::vector<ii> pos;
std::vector<ii> neg;
int n,a,b;cin>>n;
for(int i=0;i<n;i++){
cin>>a>>b;
if(a<0)
neg.push_back(ii(a,b));
else
pos.push_back(ii(a,b));
}
sort(neg.rbegin(),neg.rend());
sort(pos.begin(),pos.end());
int ne=neg.size();
int p=pos.size();
int sum=0;
if(n==p){
	int i;
	for(i=0;i<n;i++){
		sum+=(neg[i].second+pos[i].second);
	}
}
else if(ne>p){
	int i;
	for( i=0;i<p;i++){
		sum+=(neg[i].second+pos[i].second);
	}
	sum+=neg[i].second;
}
else{
	int i;
	for( i=0;i<n;i++){
		sum+=(neg[i].second+pos[i].second);
	}
	sum+=pos[i].second;	
}
cout<<sum;
return 0;
}