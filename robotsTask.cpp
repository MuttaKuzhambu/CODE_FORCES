#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count=0,fow=1,current=0,direc=0;
	while(n){
		if(fow){
			for(int i=0;i<n;i++){
				if(a[i]!=-1){
					if(a[i]<=current){
						current++;
						a[i]=-1;
						n--;
					}
				}
			}
		if(n==0)
			break;
		direc++;
		fow=0;
		}
		else{
			for(int i=n-1;i>=0;i--){
				if(a[i]!=-1){
					if(a[i]<=current)
						current++;
						a[i]=-1;
						n--;
					}
			}
		}
		if(n==0)
			break;
		direc++;
		fow=1;
	}
	cout<<direc<<endl;
	return 0;
}