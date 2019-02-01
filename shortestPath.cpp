#include<bits/stdc++.h>
using namespace std; 
int main(){
	int V,E,u,v,w;
	cin>>V>>E;
	int graph[V][V],path[V][V];
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			graph[i][j]=1000;
		}
	}
	for(int e=0;e<E;e++){
		cin>>u>>v>>w;
		graph[u][v]=w;
		graph[v][u]=w;
	}
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			cout<<graph[i][j]<<"\t";
		}
		cout<<endl;
	}
	

int distance[V][V];
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			distance[i][j]=graph[i][j];
			path[i][j]=j;
		}
	}
	for(int k=0;k<V;k++){
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
				if(distance[i][k]+distance[k][j]<distance[i][j]){
					distance[i][j]=distance[i][k]+distance[k][j];
					path[i][j]=path[i][k];
				}
			}
		}
	}
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			cout<<path[i][j]<<"\t";
		}
		cout<<endl;
	}

	getchar();
	return 0;
}