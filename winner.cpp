#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	map<string,int> table;
	while(n--){
	string s;
	cin>>s;
	int n;
	cin>>n;
	if(table.count(s)==0)
			table[s]=n;
	else
			table[s]+=n;
	}
}