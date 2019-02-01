#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=0;
	int arr[n][3];
	int result=0;
	for(int i=0;i<n;i++){
		count=0;
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
			if(arr[i][j]==1)
				count++;
		}
		if(count>=2)
			result++;

	}
	cout<<result;
	return 0;

}