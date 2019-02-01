#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,arr[3]={0},pos=0,result=0;
	cin>>n>>arr[0]>>arr[1]>>arr[2];
	if(n==1){
cout<<result;return 0;	}
n--;
pos=(arr[0]<arr[1])?1:2;
			result+=min(arr[0],arr[1]);
	n--;
	while(n>0){
		if(pos==0){
			pos=(arr[0]<arr[1])?1:2;
			result+=min(arr[0],arr[1]);
		}
		else if(pos==1){
				pos=(arr[0]<arr[2])?0:2;			

			result+=min(arr[0],arr[2]);
		}
		else{
			pos=(arr[1]<arr[2])?0:1;			

			result+=min(arr[1],arr[2]);
		}
	n--;
	}
	cout<<result;
	return 0;
}