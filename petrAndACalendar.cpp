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
	ll m,d;cin>>m>>d;
	if(m==2){
		if(d==1){
			cout<<"4"<<endl;
			return 0;
		}
		else{
			cout<<"5";
			return 0;
		}
	}
	if(m==4 || m==6 || m==9 || m==11){
		if(d==7){
			cout<<"6";
			return 0;
		}
		else{
				cout<<"5";
				return 0;}
	}
	else
	{	if(d>=6)
			cout<<"6";
		else
			cout<<"5";
	}

}