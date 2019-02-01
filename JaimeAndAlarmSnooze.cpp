#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,hh,mm,y=0;
	cin>>x>>hh>>mm;
	if(hh%10==7 || mm%10==7){cout<<"0";return 0;}
	while(hh%10!=7 && mm%10!=7){
		mm-=x;
		y++;
		if(mm<0){
			hh--;
			mm+=60;
		}
		if(hh<0){
			hh+=24;
		}
	}
	//cout<<hh<<":"<<mm<<endl;
	cout<<y;
	return 0;
}