#include<bits/stdc++.h>
using namespace std;
bool twist(string s,int l,int h){
	if(l<=h){
				int a=s[l],b=s[h];

		if(l==h)
			return true;
		if(s[l]==s[h])
				return twist(s,l+1,h-1);
		else if(a-1==b-1 ||a-1==b+1 ||a+1 == b-1 || a+1==b+1)
				return twist(s,l+1,h-1);
		else 
			return false;

	}
	
}
int main(){
	string s;
	cin>>s;
	int n=strlen(s);
	if(twist(s,0,n-1)){
		cout<<"YES";
	}
	else
		cout<<"NO";
	getchar();
	return 0;
}
