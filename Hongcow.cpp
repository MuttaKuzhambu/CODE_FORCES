#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n=s.length();
	set<string> ss;
	while(n--){
		rotate(s.begin(),s.begin()+1,s.end());
		ss.insert(s);
	}	
	cout<<ss.size();
	return 0;
}