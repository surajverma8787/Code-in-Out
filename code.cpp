#include<iostream>
#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	LL n,k;
	cin>>n>>k;
	LL temp;
	LL ans;
	
	if(n==1 && k==1)
	cout<<1<<"\n";
	else if(n==k)
	{
		if(n%2==0)
		cout<<n<<"\n";
		else
		cout<<n-1<<"\n";
	}
	else if(n%2==0)
	{
	temp=k%(n/2);
	LL a=n/2;
	if(k<=a)
	{
		ans=2*k-1;
		cout<<ans<<"\n";
	}
	else
	{
		ans=2*temp;
		cout<<ans<<"\n";
	}
	}
	else
	{
		LL a=n/2+1;
		temp=k%(a);
		if(k<=(a))
		{
		ans=2*k-1;
		cout<<ans<<"\n";
		}
		else
		{
		ans=2*temp;
		cout<<ans<<"\n";
		}
	}
}
