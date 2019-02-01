//STUDIES\CODE_FORCES\Contest\259
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
	int i,j,a[3][3];
	fo(i,0,3){
		fo(j,0,3){
			cin>>a[i][j];
		}
	}
	a[1][1]=(a[0][2]+a[2][0])/2;
	ll sum=a[0][2]+a[1][1]+a[2][0];
	a[0][0]=sum-a[0][1]-a[0][2];
	a[2][2]=sum-a[2][0]-a[2][1];
	fo(i,0,3){
		fo(j,0,3){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}