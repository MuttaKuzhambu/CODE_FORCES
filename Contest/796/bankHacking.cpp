#include<bits/stdc++.h>
#define ll long long
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define vi vector<int>
#define all(a) a.begin(),a.end()
using namespace std;
int i,ms=INT_MIN;

int dfsutil(vector<int> graph[],vector<bool> &hacked,int n,int u,vector<int> v){
hacked[u]=true;
//cout<<"now "<<u+1<<" ";
fo(i,0,graph[u].size()){
	if(!hacked[graph[u][i]])
	v[graph[u][i]]++;
}
fo(i,0,graph[u].size()){
	//if(v[graph[u][i]]>ms)
	//	cout<<"max "<<v[graph[u][i]]<<" @ "<<graph[u][i]+1<<endl;
	ms=max(ms,v[graph[u][i]]);
	if(!hacked[graph[u][i]])
		dfsutil(graph,hacked,n,graph[u][i],v);
	}
}

int dfs(vector<int> graph[],int n,int start,vector<int> v){
	vector<bool> hacked(n,false);
	dfsutil(graph,hacked,n,start,v);

}
int main(){
	int n,start,a,b;cin>>n;
	vi v(n);
	vi graph[n];
	fo(i,0,n){
		cin>>v[i];
		if(v[i]>ms){
			ms=v[i];
			start=i;
		}
	} 
	fo(i,0,n-1){
		cin>>a>>b;
		a--;b--;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	//cout<<"start "<<start+1<<endl;
	dfs(graph,n,start,v);
	cout<<ms;

}