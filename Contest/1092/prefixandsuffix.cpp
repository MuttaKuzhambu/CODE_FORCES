#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define mod 1000000007LL
#define eps 1e-13
#define PI 3.141592653589793238L
#define INF 1000000011
#define INFLL 1000000000000000011LL
#define endl '\n'
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long>
#define vc vector<char>
#define vs vector<string>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pil pair<int, long long>
#define pli pair<long long, int>
#define pcc pair<char, char>
#define pdd pair<double, double>
#define mp make_pair
#define F first
#define S second
#define pb(x) push_back(x)
#define fo(i,a,n) for(i = (a); i < (n); i++)
#define foi(i,a,n) for(i = (a); i <= (n); i++)
#define pd(x) cout<<x
#define sd(x) cin>>x
#define nl cout<<endl
#define gtl(x) getline(cin, (x))
#define flsh fflush(stdout)
#define sws ios_base::sync_with_stdio(false); cin.tie(0)
#define gcd __gcd
#define clr(x) memset(x,0,sizeof(x))
#define all(a) (a).begin(), (a).end()
#define foreach(i,a) for(__typeof((a).begin()) i = (a).begin(); i != (a).end(); ++i)
#define sz(a) (int)((a).size())
//int a[25]= { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
//int dw[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
//int dw[8][2]={{0,1},{1,0},{0,-1},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
//ll fibonacci[2][2] = {{0,1},{1,1}};
//ll identity[2][2] = {{1,0},{0,1}};
int main(){
int n,i;cin>>n;string ans="",a="1",b,whole;
vs temp((2*n)-2);
fo(i,0,(2*n)-2){
	cin>>temp[i];
	if(temp[i].length()==n-1 && a=="1"){
		a=temp[i];
	}
	else if(temp[i].length()==n-1){
		b=temp[i];
	}
}	
//cout<<"a="<<a<<endl<<"b="<<b<<endl;
std::vector<bool> occur(n+1,false);
if(a.substr(1,n)==b.substr(0,n-1))
whole=a.substr(0,1)+b.substr(0,n);
else
whole=b.substr(0,1)+a.substr(0,n);
int pc=0,sc=0;
fo(i,0,(2*n)-2){
	string prefstring=whole.substr(0,temp[i].length()),suffstring=whole.substr(n-temp[i].length(),n);
	if(temp[i]==prefstring && temp[i]==suffstring){
		if(occur[temp[i].length()]==true){
			ans+="S";
		}
		else{
			ans+="P";
			occur[temp[i].length()]=true;
		}
	}
	else if(prefstring==temp[i]){
		ans+="P";
	}
	else{
		ans+="S";
	}
}
cout<<ans;

}