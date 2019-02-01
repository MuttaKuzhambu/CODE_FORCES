#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int l1=s1.length(),l2=s2.length();
	if(l1!=l2){
	cout<<"NO";
	return 0;
	}
	for(int i=0;i<l1;i++){
	if(s1[i]!=s2[l2-1-i]){
	cout<<"NO";
	return 0;
	}
	continue;
	}
	cout<<"YES";
	getchar();
	return 0;

}