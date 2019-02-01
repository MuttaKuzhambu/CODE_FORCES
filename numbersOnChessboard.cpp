#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
using namespace std;
int main(){
	ll i,n,q,qu,j;cin>>n>>q;
	ll a[n][n]={0};
	ll sq=n*n;
	ll count=1,count1=(sq+1)/2+1;
	//cout<<"count & count1 "<<count<<" "<<count1<<endl;
	fo(i,0,n){
		fo(j,0,n){
			if((i+j)%2==0){
				a[i][j]=count++;
			}
			else{
				a[i][j]=count1++;
			}
		}
	}
	fo(qu,0,q){
		cin>>i>>j;
		cout<<a[i-1][j-1]<<endl;
	}
	/*fo(i,0,n){
		fo(j,0,n){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}*/
	cout<<endl;
	return 0;
}