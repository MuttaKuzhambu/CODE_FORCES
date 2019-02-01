#include<bits/stdc++.h>
using namespace std;
struct Pair{
	int a,b;
};
int gcd(int a,int b){
	if(a==0||b==0)
		return -1;
	if(a==b)
		return a;
	return (a>b)?gcd(a-b,b):gcd(a,b-a);
}

int find(struct Pair p[]){
	set<int> s;
	int m,n,o,q;
	for(int i=1;i<n;i++){
		m=gcd(p[0].a,p[i].a);
		n=gcd(p[0].a,p[i].b);
		o=gcd(p[0].b,p[i].a);
		q=gcd(p[0].b,p[i].b);
		if(m==1 && n==1 && o==1 && q==1)
			return -1;
		if(m!=-1)
			if(!s.count(m)) s.insert(m);
		if(n!=-1)
			if(!s.count(n)) s.insert(n);
		if(o!=-1)
			if(!s.count(o)) s.insert(o);
		if(q!=-1)
			if(!s.count(q)) s.insert(q);


	}
	cout<<s.size()<<endl;
	if(!s.empty())
		return *s.rbegin();
	return -1;
	}
int main(){
	int n;
	cin>>n;
	 Pair p[n];
	 for(int i=0;i<n;i++){
	 	cin>>p[i].a>>p[i].b;
	 }
	 cout<<find(p);
	 getchar();
	 return 0;
}