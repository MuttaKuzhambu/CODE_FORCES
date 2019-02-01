#include<bits/stdc++.h>
using namespace std;
void dfsutil(std::vector<int> adj[],std::vector<bool> &visited,int v){
	visited[v]=true;
	for(int i=0;i<adj[v].size();i++){
		if(visited[adj[v][i]]==false)
			dfsutil(adj,visited,adj[v][i]);
	}
}
void dfs(vector<int> adj[],int V){
	vector<bool> visited(V,false);
	int count=0;
	for(int v=0;v<V;v++){
		if(visited[v]==false)
			{
				dfsutil(adj,visited,v);count++;
			}
			
	}
	cout<<count;
}
int main(){
	int V,E,u,v;
	cout<<"no of vertices & edges ";cin>>V>>E;
	vector<int> adj[V];
	for(int e=0;e<E;e++){
	cin>>u>>v;
	adj[u].push_back(v);
	adj[v].push_back(u);
	}
	dfs(adj,V);
	getchar();
	return 0;
}