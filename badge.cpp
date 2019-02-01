#include<bits/stdc++.h>
using namespace std;
void dfsutil(std::vector<bool> &visited,std::vector<int > adj[],int u,int V){
	//cout<<"hi: "<<u<<endl;
	if(visited[u]==true){
		cout<<u+1<<" ";
		return;
	}
	else{
		visited[u]=true;
		for(int i=0;i<adj[u].size();i++){
			//if(visited[adj[u][i]]==false)
				dfsutil(visited,adj,adj[u][i],V);
		}
		visited[u]=false;
	}
}
void badge(std::vector<int> adj[],int V){
	std::vector<bool> visited(V,false);
	for(int i=0;i<V;i++){
		if(visited[i]==false)
		dfsutil(visited,adj,i,V);
	}
}
int main(){
	int V,u,v,E;
	cin>>V;
	vector<int> adj[V];
	for(int i=0;i<V;i++){
		cin>>u;
		adj[i].push_back(u-1);
	}
 badge(adj,V);
	getchar();
	return 0;
}