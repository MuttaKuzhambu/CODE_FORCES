#include<bits/stdc++.h>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
using namespace std;
int main(){
	int i,n,m,k;cin>>n>>m>>k;
	vector<bool> holes(n+1,false);
	//set<int> holes;
	int a,b,curr=1;
	fo(i,0,m){
		cin>>a;
		//holes.insert(a);
		holes[a]=true;
	}
	if(holes[1]==true){
		cout<<"1";
		return 0;
	}
	fo(i,0,k){
		cin>>a>>b;
		if(a==curr || b==curr){
		if(a==curr){
			if(holes[b]==true){
			curr=b;
			break;
		}
			curr=b;	
		}
		else if(b==curr){
			if(holes[a]==true){
			curr=a;
			break;
					}
			curr=a;	
			}
			}
			
	}
cout<<curr;
return 0;
}