#include <bits/stdc++.h>
using namespace std;
const int M=1E9+7;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
    	long long int n,h,k,c1=0,c2=0;
    	long long int total=0;
    	cin>>n>>h>>k;
    	long long int temp=h;
    	long long int arr[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		total+=arr[i];
    	}
    	for(int i=0;i<n-2;i++)
    	{
    		if(arr[i]!=0&&arr[i+2]!=0)
    			c1++;
    		else if(arr[i]!=0)
    			c2++;
    	}
    	long long int xx=c1+c2+1;
    	if(xx<=k)
    		cout<<total+h;
    	else
    	{
	    	while(temp!=0)
	    	{
	    		if(c1>0&&xx>k)
	    		{
	    			c1--;
	    			xx-=2;
	    		}
	    		else if(c2>0&&xx>k)
	    		{
	    			c2--;
	    			xx--;
	    		}
	    		else
	    			break;
	    		temp--;
	    	}
	    	if(temp>0)
	    		cout<<total+h<<endl;
	    	else if(temp==0&&xx<=k)
	    		cout<<total+h<<endl;
	    	else
	    		cout<<-1<<endl;
	    }
    }
}