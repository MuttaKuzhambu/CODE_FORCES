#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	int i=0;
	cin>>s1>>s2;
	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
	transform(s2.begin(),s2.end(),s2.begin(),::tolower);

	int n1=s1.length();
	if(n1==s2.length())
		while(i<n1){
		if(s1[i]==s2[i])
			i++;
		else if(s1[i]<s2[i]){
		cout<<"-1";
		return 0;
		}
		else{
			cout<<"1";
			return 0;
		}
		}
		cout<<"0";
	return 0;
	}