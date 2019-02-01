#include<bits/stdc++.h>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
using namespace std;
int main(){
	string s,d;cin>>s;
	int i,n=s.length();
	int end=n-1,front=0;
	if(n==1 || n==2){
		cout<<s<<endl;
		return 0;
	}
	while(n>0){
		if(s.length()&1){
			d+=s[front++];
			d+=s[end--];
		}
		else{
			d+=s[end--];
			d+=s[front++];
		}
			
			n-=2;
			
		}

	reverse(all(d));
	if(s.length()&1){
		d.erase(0,1);
	}
	cout<<d<<endl;
	return 0;
}