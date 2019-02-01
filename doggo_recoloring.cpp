#include<bits/stdc++.h>
using namespace std;
bool recoloring(string s,int n){
	unordered_map<char,int> m;
	for(int i=0;i<n;i++){
		m[s[i]]++;
	}
	if(m.size()==1){
		return true;
	}
	int no_of_diff=0;
	unordered_map<char,int>::iterator i;
	for(i=m.begin();i!=m.end();i++){
		if(i->second==1){
		no_of_diff++;
		}
			
	}
	if(no_of_diff==n)
		return false;
	
	else 
		return true;
	
}
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	(recoloring(s,n))?cout<<"YES":cout<<"NO";
	getchar();
	return 0;
}
