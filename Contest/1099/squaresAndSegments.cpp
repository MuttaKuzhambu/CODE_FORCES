#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i,num,p=3;
	cin>>num;
	double sqroot=sqrt(num);
	long apple=ceil(sqroot);
	long ball=floor(sqroot);
	if(apple-sqroot<sqroot-ball)
	
	    cout<<2*apple<<endl;
	
	else
	
	    cout<<apple+ball<<endl;
	return 0;
}