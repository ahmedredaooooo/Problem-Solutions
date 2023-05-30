#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,sum=0,i=1;
	cin>>t;
	while(i)
	{
		sum+=i*(i+1)/2;
		if(sum>t)
			break;
		i++;
	}
	cout<<i-1;
}