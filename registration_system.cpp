#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
map<string,int> database;
while(n--){
	cin>>s;
if(database.count(s)==0){
database[s]=1;
cout<<"OK"<<endl;
}
else{
	cout<<s<<database[s]<<endl;
	database[s]++;
}


}
}