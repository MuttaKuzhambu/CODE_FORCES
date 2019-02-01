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
	ll n,q,i,a,b,sum=0,e;cin>>n>>q;
	vll v(n);
	fo(i,0,n) cin>>v[i];
	sort(v.rbegin(),v.rend());
	vll count(n,0);
	while(q--){
		cin>>a>>b;
		count[a-1]++;
		count[b]--;
	}
	fo(i,1,n) count[i]+=count[i-1];
	sort(count.rbegin(),count.rend());
	fo(i,0,n){
		if(count[i]==0)break;
		sum+=count[i]*v[i];
	}
	cout<<sum;
	return 0;
}
/*
276 C
 int n, q, x, y;
    cin>>n>>q;
    
    sary(a, a+n);
    while(q--){
        cin>>x>>y;
        occ[x-1]++;
        occ[y]--;
    }
    
    for(int i= 1; i<n; i++){
        occ[i]+= occ[i-1];
    }
    
    sort(a, a+n, comp);
    sort(occ, occ+n, comp);
    
    ULL sum= 0;
    
    for(int i= 0; i<n; i++){
        if(occ[i] == 0 ) break;
        sum+= (ULL) a[i]*occ[i];
    }
    
    cout<< sum <<endl;

}

*/