#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	bool allzero=true;
	for(int i=0;i<n;i++){cin>>a[i]; if(a[i]==1) allzero=false;}
			
		if(allzero){cout<<n; return 0;}

				

	getchar();
	return 0;
}
