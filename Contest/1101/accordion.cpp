//STUDIES\CODE_FORCES\Contest\1101
#include<bits/stdc++.h>
#define ld long double
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
	string s;
	cin>>s;
	int n=s.length(),i,cnt=0,front=-1,end=-1;
	bool found=false,fp=false,bp=false;
	fo(i,0,n){
		if(s[i]=='[')
			found=true;
		if(s[i]==':' && found==true){
			front=i;
			fp=true;
			break;
		}
	}
	found=false;
	for(i=n-1;i>=0;i--){
		if(s[i]==']')
			found=true;
		if(s[i]==':' && found==true){
			end=i;
			bp=true;
			break;
		}
	}
	fo(i,front,end+1){
		if(s[i]=='|')
			cnt++;
	}
	//cout<<front<<" "<<end<<endl;
	//cout<<(bp&&fp)<<endl;
	if((front==-1 || end==-1)  || (end<=front))
		cout<<"-1";
	else
		cout<<cnt+4<<endl;
	return 0;
}//|| (bp && fp)