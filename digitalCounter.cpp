#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vs vector<string>
#define vll vector<long long>
#define vi vector<int>
#define fo(i,a,n) for(i=(a);i<(n);i++)
int main(){
int stick[10]={2,7,2,3,3,4,2,5,1,2};
int n;cin>>n;
int n1=n%10;
int n2=n/10;
cout<<stick[n1]*stick[n2];
}