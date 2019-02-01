#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,elem;
	cin>>n;
	vector<int> a(n,0),b(n,0);
	for(int i=0;i<n;i++){cin>>elem;a[elem-1]++;}
	for(int i=0;i<n;i++){
		cin>>elem;
		b[elem-1]++;
	}
	for(int i=0;i<n;i+){
		cout<<a[i]<<" "<<b[i]<<endl;
	}

}