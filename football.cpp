#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int result=0;
	int n=s.length();
	for(int i=0;i<n;i++){
	if(s[i]==s[i+1]){
	result
	++;
	if(result>=6){
		cout<<"YES";
		return 0;
	}
	}
	else{
	result=0;
	}
	}
	cout<<"NO";
	return 0;
}