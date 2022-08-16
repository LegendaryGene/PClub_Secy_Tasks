#include <bits/stdc++.h>
using namespace std;
const int M=1E9+7;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,tt;
    cin>>t;
    tt=t;
    srand(time(0));
    while(t--)
    {
	    int a=200000/tt,n=rand()%a;
	    int h=rand()%n,k=rand()%n;
	    cout<<n<<" "<<h<<" "<<k<<endl;
	    int x=n/2;
	    if(n%2)
	    {
		    cout<<0<<" ";
		    for(int i=0;i<x;i++)
		    {
		    	cout<<rand()%2<<" "<<0<<" ";

		    }
		}
	    else
	    {
	    	cout<<0<<" ";
	    	for(int i=0;i<x-1;i++)
	    	{
	    		cout<<rand()%2<<" "<<0<<" ";
	    	}
	    	cout<<0;
	    }
	    cout<<endl;
	}
}
