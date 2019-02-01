#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.length();
if(s[0]>=97)
	s[0]-=32;
for(int i=1;i<n;i++){
	if(s[i]<94)
		s[i]+=32;
}
cout<<s;
getchar();
	return 0;
}