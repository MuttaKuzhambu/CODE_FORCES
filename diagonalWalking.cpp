#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
string s;
cin>>s;
int count=0;
	for(int i=0;i<n;i++){
	if(s[i]=='R' && s[i+1]=='U'){
	i+=2;
	count++;
	}
	else if(s[i]=='U' && s[i+1]=='R'){
	i+=2;
	count++;
	}
}
cout<<n-count;
return 0;
}