#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct seq{
	int num;
	bool present;
};
int main(){
	int n,m;
	cin>>n>>m;
	vector<seq> sequence(n);
	vector<int> keys(m);
	for(int i=0;i<n;i++){
		cin>>sequence[i].num;
		sequence[i].present=false;
	}
	for(int i=0;i<m;i++)
		cin>>keys[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(sequence[i].num==keys[j]){
				cout<<sequence[i].num<<" ";
				sequence[i].present=true;
				break;
			}
		}
	}
	
	/*int n,m;
	cin>>m>>n;
	int seq[n],key;
	set<int> keys;
	for(int i=0;i<n;i++){
		cin>>seq[i];
	}
	for(int i=0;i<m;i++){
		cin>>key;
		keys.insert(key);
	}
	//cout<<"keys end:"<<keys.end();
	for(ll i=0;i<n;i++)
		if(keys.find(seq[i])!=keys.end())
				cout<<seq[i]<<" "; 
	*/
	getchar();
	return 0;
}