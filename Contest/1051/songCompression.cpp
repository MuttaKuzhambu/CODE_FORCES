#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define all(a) a.begin(),a.end()
using namespace std;
struct songs{
ll a,b;
};
bool compare(songs A,songs B){
	return ((A.a-A.b)>(B.a-B.b));
}

int main(){
ll n,m,i,present=0,diff=0;
cin>>n>>m;
vector<songs> song(n);
fo(i,0,n){
	cin>>song[i].a>>song[i].b;
	present+=song[i].a;
	diff+=song[i].a-song[i].b;

}
if(present<=m){
	cout<<"0";
	return 0;
}
if(present-diff>m){
	cout<<"-1";
	return 0;
}
sort(song.begin(),song.end(),compare);
cout<<endl;
fo(i,0,n){
	present-=(song[i].a-song[i].b);
	//cout<<present<<endl;
	if(present<=m)
		break;
}
cout<<i+1<<endl;
return 0;

}