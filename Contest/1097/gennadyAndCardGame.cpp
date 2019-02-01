//STUDIES\CODE_FORCES\Contest\1097
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pll pair<long long,long long>
#define vll vector<long long>
#define fo(i,a,n) for(i=(a);i<(n);i++)
#define vs vector<string>
#define test cout<<endl<<"found!"<<endl
#define all(a) a.begin(),a.end()
#define F first
#define S second
using namespace std;
int main(){
	ll i;
	string table;cin>>table;
	vector<string> h(5);
	set<char> numbers;
	set<char> s;
	fo(i,0,5){
		cin>>h[i];
		numbers.insert(h[i][0]);
		s.insert(h[i][1]);}
		if(numbers.find(table[0])!=numbers.end() || s.find(table[1])!=s.end())
			{cout<<"YES";}


		else 
			{cout<<"NO";}
		return 0;
}