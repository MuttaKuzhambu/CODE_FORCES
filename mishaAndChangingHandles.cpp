#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,string> ss;
	string a,b;
	int n;
	cin>>n;
	while(n--){
		cin>>a>>b;
		bool notplaced=true;
		for(map<string,string>::iterator i=ss.begin();i!=ss.end();i++){
			if(i->second==a){
				i->second=b;
				notplaced=false;
				break;
			}
		}
		if(notplaced==true)
			ss[a]=b;
	}
	cout<<ss.size()<<endl;
	for(map<string,string>::iterator i=ss.begin();i!=ss.end();i++)
		cout<<i->first<<" "<<i->second<<endl;
	return 0;	
}