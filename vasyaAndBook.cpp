#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;cin>>T;
	vector<int> ans;
	for(int t=0;t<T;t++){
		int n,x,y,d,pos,count=0;cin>>n>>x>>y>>d;
		if(y<x){
			pos=x;
			while(y!=pos && pos>=1){
				pos-=d;
				count++;
			}
			if(y==pos){
				ans.push_back(count);
				//cout<<count<<endl;
				//return 0;
				goto a;
			}
			if(pos<1){
				pos=1;
				while(pos<=n){
					pos+=d;
					count++;
					if(pos==y){
						ans.push_back(count);
						goto a;
						//return 0;
					}
				}
			}
			pos=x;
			count=0;
			while(pos<=n){
				pos+=d;
				count++;
			}
			pos=n;
			while(y!=pos && pos>=1){
				pos-=d;
				count++;
			}
			if(y==pos){
				ans.push_back(count);
				goto a;
				//return 0;
			}
			ans.push_back(-1);
			goto a;
			//return 0;
		}
		else{
			pos=x;
			while(y!=pos && pos<=n){
				pos+=d;
				count++;
				//cout<<pos<<"->";
			}
			if(y==pos){

				ans.push_back(count);
				goto a;
				//return 0;
			}
			if(pos>=n){
				pos=n;
				while(pos>=1){
					pos-=d;
					count++;
					if(pos==y){
						ans.push_back(count);
						goto a;//return 0;
					}
				}
			}
			pos=x;
			count=0;
			while(pos>=1){
				pos-=d;
				count++;
			}
			pos=1;
			while(y!=pos && pos<=n){
				pos+=d;
				count++;
			}
			if(y==pos){
				ans.push_back(count);
				goto a;
				//return 0;
			}
			ans.push_back(-1);
			goto a;
			//return 0;
//
		}
		 a:
		 continue;
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
}