#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0;
	map<int,int> key;
	int len=s.length();
	for(int i=0;i<len;i+=2){
		key[s[i]-'a']++;
		if(key[s[i+1]-'A']==0)
				count++;
		else
			key[s[i+1]-'A']--;
	}
	cout<<count<<endl;
	
	getchar();
	return 0;
}