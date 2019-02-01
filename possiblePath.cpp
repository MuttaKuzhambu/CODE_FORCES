#include<bits/stdc++.h>
using namespace std;
void countutil(std::vector<bool> &visited,std::vector<int> adj[],int V,int s,int d,int &pathcount){
visited[s]=true;
if(s==d){
pathcount++;
}
else{
	for(int i=0;i<adj[s].size();i++){
		countutil(visited,adj,V,adj[s][i],d,pathcount);
	}
}
visited[s]=false;
}
void count_path(vector<int> adj[],int V,int a,int b){
	std::vector<bool> visited(V,false);
	int pathcount=0;
	countutil(visited,adj,V,a,b,pathcount);
	cout<<pathcount;
	}
int main(){
	int V,E,u,v;
	cin>>V>>E;
	vector<int> adj[V];
	for(int e=0;e<E;e++){
		cin>>u>>v;
		adj[u].push_back(v);
	}
	cout<<"enter the two vertices";
	cin>>u>>v;
	count_path(adj,V,u,v);
	getchar();
	return 0;
}
/*
5
7
0 1
0 4
0 2
1 3
1 4
2 4
3 2