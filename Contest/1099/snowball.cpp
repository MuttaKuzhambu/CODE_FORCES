//STUDIES\CODE_FORCES\Contest\1099
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
	int i,w0,h0,w1,h1,w2,h2;cin>>w0>>h0>>w1>>h1>>w2>>h2;
	int present_weight=w0;
	for(i=h0;i>=0;i--){		if(present_weight<0)
			present_weight=0;
		present_weight+=i;
		if(i==h1)
			present_weight-=w1;
		else if(i==h2)
			present_weight-=w2;	}

	cout<<present_weight<<endl;
	return 0;
}