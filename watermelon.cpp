#include<bits/stdc++.h>
using namespace std;

int main(){
	int w;
	cin>>w;
	if(w<=2 || w >100){
		cout<<"NO";
		return 0;
	}

	if(w%2!=0)
		cout<<"NO";
	else
		cout<<"YES";
return 0;
}