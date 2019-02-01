#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int bitu=(k*2)+1;
int count=(n%bitu)+1;
int c=0,a;
a=n-k;
while(c<count){
c++;
a-=bitu;
if(a<0){
	int diff=abs(a-1);
	a+=diff;
}
}
cout<<count<<endl;
for(int i=0;i<count;i++){
cout<<a<<" ";
a+=bitu;
}
	getchar();
	return 0;
}