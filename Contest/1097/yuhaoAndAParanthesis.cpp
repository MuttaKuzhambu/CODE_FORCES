//STUDIES\CODE_FORCES\Contest\1097
#include<bits/stdc++.h>
#define ll long long
#define vb vector<bool>
#define sz(a) a.size() 
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
	ll n,i,j,curop,curcl,both=0,ans=0 ;cin>>n;
	vll op(n+1,0),cl(n+1,0);
	fo(i,0,n){
		string s;cin>>s;
		curcl=0;curop=0;
		fo(j,0,s.length()){
			if(s[j]=='(')
				curop++;
			else 
				{if(curop>0)curop--;
								else
									curcl++;}
		}
		//example )(
		if(curcl!=0 && curop!=0) continue;
		else if(curop!=0) op[curop]++;
		else if(curcl!=0) op[curcl]++;
		else both++;

	}
	fo(i,0,n) cout<<op[i]<<" "<<cl[i]<<endl;
	ans+=both/2;
	fo(i,0,n+1) 
		ans+=min(op[i],cl[i]);
	cout<<ans<<endl;
	return 0;
}