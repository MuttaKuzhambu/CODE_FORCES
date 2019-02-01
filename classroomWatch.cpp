#include<bits/stdc++.h>
using namespace std;
int check(int num,int n){
	int result=num;
	while(num>0){
		result=result+(num%10);
		num=num/10;
	}
	return (n==result)?1:0;
}
int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0.80*n;i<n;i++){
		if(check(i,n)){
			a.push_back(i);
		}
	}
	int count=a.size();
	cout<<count<<endl;
	for(int i=0;i<count;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}