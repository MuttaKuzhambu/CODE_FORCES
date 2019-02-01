#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    vector<int> count;
    int pres_count=0;
    /*if(n<k)
    {
        cout<<"NO";
        return 0;
    }*/
	while(n>0)
	{
		if(n%2)
			pres_count++;
	    arr.push_back(n%2);
	    count.push_back(n%2);
	    n/=2;
	}
	
	
	// if(pres_count==k){

	// }
	/*for(int i=0;i<arr.size();i++)
	{
	    if(arr[i]==1)
	    count++;
	}
	if(count==k)
	{
	    cout<<"YES"<<endl;
	    for(int i=0;i<arr.size();i++)
	    {
	        if(arr[i]==1)
	        cout<<pow(2,i)<<" ";
	    }
	    return 0;
	}
	else
	{
	    for(int i=0;i<arr.size();i++)
	    {
			
	    }
	}
	return 0;*/
	int n=count.size();
	while(pres_count!=k){
		arr[]
	}

	for(int i=0;i<arr.size();i++)
		cout<<arr[i];
	cout<<endl;
	for(int i=0;i<count.size();i++)
		cout<<count[i];
	return 0;
}
