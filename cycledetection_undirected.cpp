#include<bits/stdc++.h>
using namespace std;
bool cyclicUtil(std::vector<int> adj[],std::vector<bool> &visited,int parent,int u){
if(visited[u]==false){
	visited[u]=true;
	for(int i=0;i<adj[u].size();i++){
		if(visited[adj[u][i]]==false)
			if(cyclicUtil(adj,visited,adj[u][i],u))
				return true;
		else if(adj[u][i]!=parent)
				return true;
	}
}	

return false;
}
bool detect(std::vector<int> adj[],int V){
	std::vector<bool> visited(V,false);
	for(int u=0;u<V;u++){
		if(visited[u]==false)
			cyclicUtil(adj,visited,-1,u);
	}
}
int main(){
	int V,E,u,v;
	cin>>V>>E;
	vector<int> adj[V];
	for(int i=0;i<E;i++){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	if(detect(adj,V))
		cout<<"present";
	getchar();
return 0;
}