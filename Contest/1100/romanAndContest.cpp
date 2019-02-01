//STUDIES\CODE_FORCES\Contest\1100B
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
	ll j,i,n,m;
	cin>>m>>n;
	vll a(n),count(m,0);
	fo(i,0,n) cin>>a[i];
	bool all;
	fo(i,0,n){
		all=true;
		count[a[i]-1]++;
		/*fo(j,0,m){
			cout<<count[j]<<" ";
		}
		cout<<endl;*/
		fo(j,0,m){
					if(count[j]<1)
					all=false;
			}
			if(all==true){
							cout<<"1";
						fo(j,0,m)
						count[i]--;}
		else cout<<"0";
		//continue;

	}
	return 0;
		
}