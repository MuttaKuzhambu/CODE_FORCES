//STUDIES\CODE_FORCES\Contest\1108A
#include<bits/stdc++.h>
#define ll long long
#define vb vector<bool>
#define vi vector<int>
#define vs vector<string>
#define pll pair<long long,long long>
#define vll vector<long long>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
#define F first
#define S second
using namespace std;
int main(){
ll i,q,l1,l2,r1,r2;cin>>q;
while(q--){
cin>>l1>>r1>>l2>>r2;
if(l1==l2){
	cout<<l1<<" "<<l1+1<<endl;
	
}
else
cout<<l1<<" "<<l2<<endl;
}
return 0;
}