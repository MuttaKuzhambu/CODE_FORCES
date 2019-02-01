/*#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a==0||b==0)
		return 0;
	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b,b);
	return gcd(a,b-a);
	
}
int main(){
int n;
cin>>n;
int total_sum=(n*(n+1))/2;
for(int i=1;i<=n;i++){
	if(gcd(i,total_sum-i)>1){
	cout<<"Yes"<<endl;
	cout<<"1 "<<i<<endl;
	cout<<n-1;
	for(int j=1;j<=n;j++){
		if(j!=i)
			cout<<" "<<j;
	}
	return 0;
	}
}
	cout<<"No";
	getchar();
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,j;
	//hahahaha
	cin>>n;
	if(n==1 || n==2)
	{
		cout<<"No";
		return 0;
	}
	long ch=0;
	for(j=2;j<=n;j++)
	{	//hahahaha
		ch=0;
		for(int i=1;i<=n;i++)
		{
			if(i!=j)
			ch+=i;		
		}
		if(ch%j==0)
		{
			cout<<"Yes"<<endl;
			goto loop;
		}
	}
	//hahahaha
	loop:{}
	cout<<"1 "<<j<<endl;
	cout<<n-1<<" ";
	for(int p=1;p<=n;p++)
	if(p!=j)
	cout<<p<<" ";
	return 0;
}