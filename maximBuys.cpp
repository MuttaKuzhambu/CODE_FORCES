#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,k;
cin>>n>>k;
if(k==0 || k==n)
	cout<<"0  0"<<endl;
else{
	long long max=(n>3*k)?2*k:(n-k);
	cout<<"1 "<<max<<endl;
}
return 0;
}
