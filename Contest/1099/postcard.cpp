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
string removechars(string s,ll k,ll n,ll stringLength){
	ll i,counter=0;
	string ans;
	for(i=1;i<n;i++){
		 if(s[i]=='?' || s[i]=='*'){
			counter++;
			if(counter==stringLength-k)
				break;
		}
		else{
			if(s[i-1]!='?' && s[i-1]!='*')
			ans+=s[i-1];
		}
	}
	while(i<n){
		if(s[i]!='?' && s[i]!='*')
		ans+=s[i];
		i++;
	}
	//cout<<ans<<endl;
		return ans;
}
string incchars(string s,ll k,ll n,ll stringLength){
	ll i,j;
	string ans;
	fo(i,0,n){
		//cout<<"stck"<<endl;
		if(s[i]=='?')
			continue;
		else if(s[i]=='*'){
					fo(j,0,abs(stringLength-k))
						ans+=s[i-1];
						break;}
		else{
			ans+=s[i];
		}
	}
	//cout<<ans<<endl;
	while(i<n){
		if(s[i]!='?' && s[i]!='*')
		ans+=s[i];
		i++;

	}
	return ans;
}
int main(){
	string s;cin>>s;
	ll k,i,n=s.length(),cc=0,sc=0;cin>>k;
	ll stringLength=0;
	fo(i,0,n){
		if(s[i]!='?' && s[i]!='*')
			stringLength++;
		else if(s[i]=='?')
			cc++;
		else
			sc++;
	}
	//cout<<stringLength<<endl<<k<<endl;
	if(stringLength==k)
		fo(i,0,n){
			if(s[i]!='?' && s[i]!='*')
				cout<<s[i];
		}
	if(stringLength>k){
		if(stringLength-(sc+cc)>k){
			cout<<"Impossible";
			return 0;
		}
	string remstr=removechars(s,k,n,stringLength);
	string ans;
	fo(i,0,remstr.length()){
		if(remstr[i]=='?' || remstr[i]=='*')
			ans+=remstr[i-1];
		else 
			ans+=remstr[i];
	}
	cout<<ans<<endl;
	}
	if(sc==0 && stringLength<k){
		cout<<"Impossible";
		return 0;
	}
	if(k>stringLength){
		//cout<<"stuck "<<endl;
		cout<<incchars(s,k,n,stringLength);
	}



}